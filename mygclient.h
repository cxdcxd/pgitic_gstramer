#ifndef MYGCLIENT_H
#define MYGCLIENT_H

#include <QObject>
#include "gst/gst.h"
#include <glib.h>

class myGclient : public QObject
{
    Q_OBJECT
public:
    explicit myGclient(QObject *parent = 0);
     void start(int port,std::string name);
     GstElement *pipeline, *source, *conv, *sink , *wavenc;
     GMainLoop *loop;
     GstBus *bus;
     guint bus_watch_id;

signals:

public slots:

};

#endif // MYGCLIENT_Hs
