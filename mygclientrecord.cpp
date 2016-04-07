#include "mygclientrecord.h"


mygclientrecord::mygclientrecord(QObject *parent) :
    QObject(parent)
{

}

void mygclientrecord::record_start()
{
    qDebug("PGITICLOG - record_start");
    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

    if (ret == GST_STATE_CHANGE_FAILURE) {
        g_printerr ("Unable to set the pipeline to the playing state.\n");
        return ;
    }

    g_print ("Recording...\n");

    g_main_loop_run (loop);
}

void mygclientrecord::record_stop()
{
    /* Out of the main loop, clean up nicely */
    g_print ("Returned, stopping recording\n");
    gst_element_set_state (pipeline, GST_STATE_NULL);

    g_print ("Deleting pipeline\n");
    gst_object_unref (GST_OBJECT (pipeline));
    //g_source_remove (bus_watch_id);
    g_main_loop_unref (loop);

    //==========================================================================
    qDebug("PGITIC - Gstreamer Interface Finished");
}

void mygclientrecord::start()
{
    app_exited = false;
    qDebug("PGITIC - Gstreamer Interface Client Start");
    //==========================================================================
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
    /* Set up the parameters */
    g_object_set (G_OBJECT (sink), "location", "out.mp3", NULL);
    /* check the links */
    if ( abool && bbool && cbool )
    {
        printf("OK link\n");
    }
    else
    {
        printf("! link error\n");
    }

    printf("Recorder Config Done\n");

}
