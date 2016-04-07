#ifndef MYTHREADGCLIENTPLAY_H
#define MYTHREADGCLIENTPLAY_H

#include <QThread>
#include "gst/gst.h"
#include <glib.h>
#include "mygclientplay.h"

class mythreadgclientplay : public QThread
{
    Q_OBJECT
public:
    explicit mythreadgclientplay(QObject *parent = 0);
    void run();
    int port;
    std::string name;
    mygclientplay *mgclient;
    void play_start(std::string filenamee);
    void play_stop();
    bool app_exit;
    std::string state;
     std::string filename;
signals:

public slots:

};

#endif // MYTHREADGCLIENTPLAY_H
