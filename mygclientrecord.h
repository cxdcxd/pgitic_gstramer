#ifndef MYGCLIENT_H
#define MYGCLIENT_H

#include <QObject>
#include "gst/gst.h"
#include <glib.h>

class mygclientrecord : public QObject
{
    Q_OBJECT
public:
    explicit mygclientrecord(QObject *parent = 0);
     void start();
     GstElement *pipeline, *source, *conv, *sink , *lamemp3enc;
     GMainLoop *loop;

     void record_start(std::string filename);
     void record_stop();

     bool app_exited ;

signals:

public slots:

};

#endif // MYGCLIENT_Hs
