#include "mygclientrecord.h"
#include "QDir"
#include "iostream"
#include "statics.h"

mygclientrecord::mygclientrecord(QObject *parent) :
    QObject(parent)
{

}

static gboolean
cb_print_position (GstElement *pipeline)
{
  gint64 pos, len;

  GstFormat c = GST_FORMAT_TIME;

  if (gst_element_query_position (pipeline,&c, &pos)
    && gst_element_query_duration (pipeline, &c, &len)) {
//   g_print ("Time: %" GST_TIME_FORMAT " / %" GST_TIME_FORMAT "\r",
//         GST_TIME_ARGS (pos), GST_TIME_ARGS (len));


         char buff[100];
        snprintf(buff, sizeof(buff), "%" GST_TIME_FORMAT "", GST_TIME_ARGS (pos));
        std::string buffAsStdStr = buff;


        audio_info = buffAsStdStr;

        //audio_current_second = GST_TIME_ARGS (pos);
        //audio_max_seconds = GST_TIME_ARGS (len);

        std::cout<<audio_info<<std::endl;
  }

  /* call me again */
  return TRUE;
}


void mygclientrecord::record_start(std::string filename)
{
    /* Initialisation */
    loop = g_main_loop_new (NULL, FALSE);
    /* Create gstreamer elements */
    pipeline = gst_pipeline_new ("audio-recorder");
    //----------------------------------------------------------------------------------------
    source   = gst_element_factory_make ("alsasrc",    "src");
    conv     = gst_element_factory_make ("audioconvert",  "converter");
    lamemp3enc   = gst_element_factory_make ("lamemp3enc" ,    "mp3");
    sink     = gst_element_factory_make ("filesink",       "audio-output");
    //----------------------------------------------------------------------------------------
    /* check objects */
    if (!pipeline || !source || !conv || !sink || !lamemp3enc ) {
        g_printerr ("One element could not be created. Exiting.\n");
        return;
    }
    else
    {
        printf("OK\n");
    }

    /* Set up the pipeline bin */
    gst_bin_add_many (GST_BIN (pipeline),source, lamemp3enc , conv, sink, NULL);
    /* Set up the links */
    gboolean abool = gst_element_link (source , conv);
    gboolean bbool = gst_element_link (conv   , lamemp3enc);
    gboolean cbool = gst_element_link (lamemp3enc , sink);

    g_object_set (G_OBJECT (sink), "location", filename.c_str(), NULL);
    /* check the links */
    if ( abool && bbool && cbool )
    {
        printf("OK link\n");
    }
    else
    {
        printf("! link error\n");
    }


    mtlog->insert_log("gclientrecord","PGITIC - Gstreamer Interface record_start ","INFO");

    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

    if (ret == GST_STATE_CHANGE_FAILURE) {
        g_printerr ("Unable to set the pipeline to the playing state.\n");
        return ;
    }

      g_timeout_add (200, (GSourceFunc) cb_print_position, pipeline);


    g_print ("Recording...\n");

    g_main_loop_run (loop);
}

void mygclientrecord::record_stop()
{
    g_main_loop_quit(loop);
    /* Out of the main loop, clean up nicely */
    g_print ("Returned, stopping recording\n");
    gst_element_set_state (pipeline, GST_STATE_NULL);

    g_print ("Deleting pipeline\n");
    gst_object_unref (GST_OBJECT (pipeline));
    //g_source_remove (bus_watch_id);
    g_main_loop_unref (loop);

    //==========================================================================
    mtlog->insert_log("gclientrecord","PGITIC -  Gstreamer Interface Finished ","INFO");

}

void mygclientrecord::start()
{
    app_exited = false;
    mtlog->insert_log("gclientrecord","PGITIC - Gstreamer Interface Client Start","INFO");
}
