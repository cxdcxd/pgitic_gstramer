#include "mygserver.h"

static gboolean
bus_calls (GstBus     *bus,
           GstMessage *msg,
           gpointer    data)
{
    GMainLoop *loop = (GMainLoop *) data;

    switch (GST_MESSAGE_TYPE (msg)) {

    case GST_MESSAGE_EOS:
        g_print ("End of stream\n");
        g_main_loop_quit (loop);
        break;

    case GST_MESSAGE_ERROR: {
        gchar  *debug;
        GError *error;

        gst_message_parse_error (msg, &error, &debug);
        g_free (debug);

        g_printerr ("Error: %s\n", error->message);
        g_error_free (error);

        g_main_loop_quit (loop);
        break;
    }
    default:
        break;
    }

    return TRUE;
}

static gboolean
link_elements_with_filter (GstElement *element1, GstElement *element2)
{
    gboolean link_ok;
    GstCaps *caps;

    caps = gst_caps_new_simple ("audio/x-raw-int",
                                "channels"       , G_TYPE_INT , 1,
                                "depth"          , G_TYPE_INT , 16,
                                "width"          , G_TYPE_INT , 16,
                                "rate"           , G_TYPE_INT , 44100 , NULL);

    link_ok = gst_element_link_filtered (element1, element2, caps);
    gst_caps_unref (caps);

    if (!link_ok)
    {
        g_warning ("Failed to link element1 and element2!");
    }

    return link_ok;
}


myGserver::myGserver(QObject *parent) :
    QObject(parent)
{

}

void myGserver::stop()
{
    g_main_loop_quit(loop);
    g_main_loop_unref (loop);
    /* Out of the main loop, clean up nicely */
    g_print ("Returned, stopping playback\n");
    gst_element_set_state (pipeline, GST_STATE_NULL);

    g_print ("Deleting pipeline\n");
    g_source_remove (bus_watch_id);

}

void myGserver::start()
{
    qDebug("PGITIC - Gstreamer Interface Server Start");
    //==========================================================================

    /* Initialisation */
    gst_init (0,0);
    loop = g_main_loop_new (NULL, FALSE);

    /* Create gstreamer elements */
    pipeline = gst_pipeline_new ("audio-player");

    //----------------------------------------------------------------------------------------
    source   = gst_element_factory_make ("alsasrc",       "microphone");
    conv     = gst_element_factory_make ("audioconvert",  "converter");
    rtppay   = gst_element_factory_make ("rtpL16pay" ,    "rtppay");
    sink     = gst_element_factory_make ("udpsink",       "audio-output");
    //----------------------------------------------------------------------------------------

    if (!pipeline || !source || !conv || !sink || !rtppay ) {
        g_printerr ("One element could not be created. Exiting.\n");
        return;
    }
    else
    {
        printf("OK\n");
    }

    /* Set up the pipeline */
    gst_bin_add_many (GST_BIN (pipeline),source, conv, rtppay , sink, NULL);

    gboolean abool = gst_element_link (source , conv);
    gboolean bbool = link_elements_with_filter ( conv , rtppay );
    gboolean cbool = gst_element_link (rtppay , sink);

    g_object_set (G_OBJECT (sink), "host", "192.168.16.255", NULL);
    g_object_set (G_OBJECT (sink), "port", 5010, NULL);

    if ( abool && bbool && cbool )
    {
        printf("OK link\n");
    }
    else
    {
        printf("link error\n");
    }

    bus = gst_pipeline_get_bus (GST_PIPELINE (pipeline));
    bus_watch_id = gst_bus_add_watch (bus, bus_calls, loop);
    gst_object_unref (bus);

    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

    if (ret == GST_STATE_CHANGE_FAILURE) {
        g_printerr ("Unable to set the pipeline to the playing state.\n");
        return ;
    }

    g_print ("Running...\n");
    g_main_loop_run (loop);

    printf("OK all run done\n");

    //==========================================================================
    qDebug("PGITIC - Gstreamer Interface Finished");
}
