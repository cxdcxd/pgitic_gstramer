#include "mygstreamer.h"
#include <gst/gst.h>

MyGstreamer::MyGstreamer(QObject *parent) :
    QObject(parent)
{

}

void MyGstreamer::start()
{
    qDebug("Gstreamer Started...");

    GstElement *pipeline;
    GstBus *bus;
    GstMessage *msg;

    /* Initialize GStreamer */
    gst_init (0, 0);

    /* Build the pipeline */
    pipeline = gst_parse_launch ("playbin2 uri=http://docs.gstreamer.com/media/sintel_trailer-480p.webm", NULL);

    /* Start playing */
    gst_element_set_state (pipeline, GST_STATE_PLAYING);

    /* Wait until error or EOS */
    bus = gst_element_get_bus (pipeline);
    msg = gst_bus_timed_pop_filtered (bus, GST_CLOCK_TIME_NONE, (GstMessageType)(GST_MESSAGE_ERROR | GST_MESSAGE_EOS));

    /* Free resources */
    if (msg != NULL)
        gst_message_unref (msg);
    gst_object_unref (bus);
    gst_element_set_state (pipeline, GST_STATE_NULL);
    gst_object_unref (pipeline);
}