#include "mygclient.h"

static gboolean
bus_callc (GstBus     *bus,
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

myGclient::myGclient(QObject *parent) :
    QObject(parent)
{

}

static gboolean
link_elements_with_filter2 (GstElement *element1, GstElement *element2)
{
  gboolean link_ok;
  GstCaps *caps;

  caps = gst_caps_new_simple ("application/x-rtp",
                              "media"            ,    G_TYPE_STRING ,   "audio",
                              "clock-rate"       ,    G_TYPE_INT    ,   44100,
                              "width"            ,    G_TYPE_INT    ,   16,
                              "height"           ,    G_TYPE_INT    ,   16,
                              "encoding-name"    ,    G_TYPE_STRING ,   "L16",
                              "encoding-params"  ,    G_TYPE_STRING ,   "1",
                              "channels"         ,    G_TYPE_INT    ,   1,
                              "channel-positions",    G_TYPE_INT    ,   1,
                              "payload"          ,    G_TYPE_INT    ,   96,
                              NULL);

  link_ok = gst_element_link_filtered (element1, element2, caps);
  gst_caps_unref (caps);

  if (!link_ok)
  {
    g_warning ("Failed to link element1 and element2 CLIENT!");
  }

  return link_ok;
}

void myGclient::start(int port,std::string name)
{
    qDebug("PGITIC - Gstreamer Interface Client Start");
    //==========================================================================

    /* Initialisation */

    loop = g_main_loop_new (NULL, FALSE);

    /* Create gstreamer elements */
    pipeline = gst_pipeline_new ("audio-player");

    //----------------------------------------------------------------------------------------
    source   = gst_element_factory_make ("alsasrc",    "src");
    conv     = gst_element_factory_make ("audioconvert",  "converter");
    wavenc   = gst_element_factory_make ("wavenc" ,    "wav");
    sink     = gst_element_factory_make ("filesink",       "audio-output");
    //----------------------------------------------------------------------------------------

    if (!pipeline || !source || !conv || !sink || !wavenc ) {
        g_printerr ("One element could not be created. Exiting.\n");
        return;
    }
    else
    {
        printf("OK\n");
    }

   /* Set up the pipeline */


     gst_bin_add_many (GST_BIN (pipeline),source, wavenc , conv, sink, NULL);

    gboolean abool = gst_element_link (source , conv);
    gboolean bbool = gst_element_link (conv   , wavenc);
    gboolean cbool = gst_element_link (wavenc , sink);

    g_object_set (G_OBJECT (sink), "location", "test.wav", NULL);

    if ( abool && bbool && cbool )
    {
        printf("OK link\n");
    }
    else
    {
        printf("! link error\n");
    }

    GstStateChangeReturn ret;
    ret = gst_element_set_state (pipeline, GST_STATE_PLAYING);

   if (ret == GST_STATE_CHANGE_FAILURE) {
        g_printerr ("Unable to set the pipeline to the playing state.\n");
        return ;
    }

    g_print ("Running...\n");
    g_main_loop_run (loop);

    printf("OK all run done\n");

//    /* we add a message handler */
    bus = gst_pipeline_get_bus (GST_PIPELINE (pipeline));
    bus_watch_id = gst_bus_add_watch (bus, bus_callc, loop);
    gst_object_unref (bus);

//    /* Out of the main loop, clean up nicely */
    g_print ("Returned, stopping playback\n");
    gst_element_set_state (pipeline, GST_STATE_NULL);

    g_print ("Deleting pipeline\n");
    gst_object_unref (GST_OBJECT (pipeline));
    g_source_remove (bus_watch_id);
    g_main_loop_unref (loop);

    //==========================================================================
    qDebug("PGITIC - Gstreamer Interface Finished");
}
