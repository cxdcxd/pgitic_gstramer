#include "mythreadgclientrecord.h"
#include "statics.h"

mythreadgclientrecord::mythreadgclientrecord(QObject *parent) :
    QThread(parent)
{
    printf("Client Thread RUN\n");
    mgclient = new mygclientrecord();
}

void mythreadgclientrecord::run()
{
    mgclient->start();
    state = "stop";
    app_exit = false;
    while( app_exit == false )
    {
            if ( state ==  "start")
            {
              state = "loop";
               gpio->info_mode = 2;
              mgclient->record_start();
            }

        sleep(1);
    }
}

void mythreadgclientrecord::recorde_start()
{
   state = "start";
}

void mythreadgclientrecord::recorde_stop()
{
  state = "stop";
   gpio->info_mode = 3;
  mgclient->record_stop();
}
