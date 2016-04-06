#ifndef MYTHREADGSERVER_H
#define MYTHREADGSERVER_H

#include <QThread>
#include "gst/gst.h"
#include <glib.h>
#include "mygclient.h"
#include "mygserver.h"
class myThreadGserver : public QThread
{
    Q_OBJECT
public:
    explicit myThreadGserver(QObject *parent = 0);
    void run();
    std::string state;
    void xstop();
    void xstart();
    myGserver *mgserver;

signals:

public slots:

};

#endif // MYTHREADGSERVER_H
