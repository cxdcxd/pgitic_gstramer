#ifndef MYGSERVER_H
#define MYGSERVER_H

#include <QObject>
#include "gst/gst.h"
#include <glib.h>

class myGserver : public QObject
{
    Q_OBJECT
public:
    explicit myGserver(QObject *parent = 0);
    void start();
    void stop();
    GstElement *pipeline, *source, *conv, *sink , *rtppay;
    GMainLoop *loop;
    GstBus *bus;
    guint bus_watch_id;

signals:

public slots:

};

#endif // MYGSERVER_H
