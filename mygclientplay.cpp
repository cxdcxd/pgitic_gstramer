#include "mygclientplay.h"
#include "QDir"
#include "iostream"
#include "statics.h"

mygclientplay::mygclientplay(QObject *parent) :
    QObject(parent)
{

}

void mygclientplay::play_pause()
{
    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PAUSED);

}

void mygclientplay::play_resume()
{
    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

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

        audio_current_second = GST_TIME_ARGS (pos);
        audio_max_seconds = GST_TIME_ARGS (len);

        std::cout<<audio_current_second<<" "<< audio_max_seconds <<std::endl;
  }

  /* call me again */
  return TRUE;
}


void mygclientplay::play_start(std::string filename)
{
    qDebug("4");
    //==========================================================================
    /* Initialisation */
    loop = g_main_loop_new (NULL, FALSE);
    /* Create gstreamer elements */
    pipeline = gst_pipeline_new ("audio-player");
    //----------------------------------------------------------------------------------------
    source   = gst_element_factory_make ("filesrc",    "src");
    mad     = gst_element_factory_make ("mad",  "converter");
    sink     = gst_element_factory_make ("alsasink",       "audio-output");
    //----------------------------------------------------------------------------------------
    /* check objects */
    if (!pipeline || !source || !mad || !sink  ) {
        g_printerr ("One element could not be created. Exiting.\n");
        return;
    }
    else
    {
        printf("OK\n");
    }

    /* Set up the pipeline bin */
    gst_bin_add_many (GST_BIN (pipeline),source, mad, sink, NULL);
    /* Set up the links */
    gboolean abool = gst_element_link (source , mad);
    gboolean bbool = gst_element_link (mad   , sink);

    /* Set up the parameters */
//    QDir directory("/media/");
//    QStringList txtFilesAndDirectories = directory.entryList();
//    std::string item = "";

//    for ( int i =0 ; i < txtFilesAndDirectories.size() ; i++)
//    {
//        QString a = txtFilesAndDirectories.at(i);
//        if ( a.size() > 2)
//        {
//            item = a.toStdString();
//            break;
//        }
//        //std::cout<< "See : "<<a.toStdString() << std::endl;
//    }

//    if ( item != "")
//    {
//        //Check records folder is exist or not , if no create records folder
//        std::string filedir = "/media/" + item + "/records/";
//        if ( QDir(filedir.c_str()).exists() == false ) {QDir().mkdir(filedir.c_str());};

//        filename = filedir + filename;
//        std::cout<< "UDB FOUND - PATH : "<<filename<< std::endl;
//    }
//    else
//    {
//         std::cout<< "UDB NotFound - DefaultPath "<<filename<< std::endl;
//    }


    g_object_set (G_OBJECT (source), "location", filename.c_str(), NULL);
    /* check the links */
    if ( abool && bbool )
    {
        printf("OK link\n");
    }
    else
    {
        printf("! link error\n");
    }

    printf("Player Config Done\n");

    qDebug("PGITICLOG - play_start");
    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

    g_timeout_add (200, (GSourceFunc) cb_print_position, pipeline);


    if (ret == GST_STATE_CHANGE_FAILURE) {
        g_printerr ("Unable to set the pipeline to the playing state.\n");
        return ;
    }

    g_print ("Playing...\n");
    g_main_loop_run (loop);


    g_print ("loop out");
}

void mygclientplay::play_stop()
{

    g_main_loop_quit(loop);

    /* Out of the main loop, clean up nicely */
    g_print ("Returned, stopping playing\n");
    gst_element_set_state (pipeline, GST_STATE_NULL);

    g_print ("Deleting pipeline\n");
    gst_object_unref (GST_OBJECT (pipeline));
    //g_source_remove (bus_watch_id);
    g_main_loop_unref (loop);

    //==========================================================================
    qDebug("PGITIC - Gstreamer Interface Finished");
}

void mygclientplay::start()
{
    app_exited = false;
    qDebug("PGITIC - Player Interface Client Start");


}

