#ifndef MYTHREADGCLIENT_H
#define MYTHREADGCLIENT_H

#include <QThread>
#include "gst/gst.h"
#include <glib.h>
#include "mygclient.h"
#include "mygserver.h"

class myThreadGclient : public QThread
{
    Q_OBJECT
public:
    explicit myThreadGclient(QObject *parent = 0);
    void run();
    int port;
    std::string name;
    myGclient* mgclient;

signals:

public slots:

};

#endif // MYTHREADGCLIENT_H
