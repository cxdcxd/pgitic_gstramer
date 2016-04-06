#include "mythreadgclient.h"
#include "statics.h"

myThreadGclient::myThreadGclient(QObject *parent) :
    QThread(parent)
{
    printf("Client Thread RUN\n");
    mgclient = new myGclient();
}

void myThreadGclient::run()
{
    mgclient->start(port,name);
}
