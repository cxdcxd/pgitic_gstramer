#include "mythreadgserver.h"
#include "statics.h"

myThreadGserver::myThreadGserver(QObject *parent) :
    QThread(parent)
{
    printf("SERVER RUN\n");
    state = "none";
    mgserver = new myGserver();
}

void myThreadGserver::xstop()
{
    mgserver->stop();
}

void myThreadGserver::xstart()
{
    state = "on";
}

void myThreadGserver::run()
{
    while(true)
    {
        if ( state == "on" )
        {
        state = "none";
        mgserver->start();
        }

        sleep(1);

        printf("check\n");

    }
}
