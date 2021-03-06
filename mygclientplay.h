#ifndef MYGCLIENTPLAY_H
#define MYGCLIENTPLAY_H

#include <QObject>
#include "gst/gst.h"
#include <glib.h>

class mygclientplay : public QObject
{
    Q_OBJECT
public:
    explicit mygclientplay(QObject *parent = 0);
     void start();
     GstElement *pipeline, *source, *sink , *mad;
     GMainLoop *loop;

     void play_start(std::string filename);
     void play_stop();
     void play_pause();
     void play_resume();

     bool app_exited ;

signals:

public slots:

};

#endif // MYGCLIENTPLAY_H
