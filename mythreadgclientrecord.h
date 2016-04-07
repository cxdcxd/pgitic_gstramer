#ifndef MYTHREADGCLIENT_H
#define MYTHREADGCLIENT_H

#include <QThread>
#include "gst/gst.h"
#include <glib.h>
#include "mygclientrecord.h"

class mythreadgclientrecord : public QThread
{
    Q_OBJECT
public:
    explicit mythreadgclientrecord(QObject *parent = 0);
    void run();
    int port;
    std::string name;
    mygclientrecord *mgclient;
    void recorde_start(std::string filenamee);
    void recorde_stop();
    bool app_exit;
    std::string state;
    std::string filename;
signals:

public slots:

};

#endif // MYTHREADGCLIENT_H
