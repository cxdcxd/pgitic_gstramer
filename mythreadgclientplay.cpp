#include "mythreadgclientplay.h"
#include "statics.h"

mythreadgclientplay::mythreadgclientplay(QObject *parent) :
    QThread(parent)
{
    printf("Client Thread RUN\n");
    mgclient = new mygclientplay();
}

void mythreadgclientplay::run()
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
              mgclient->play_start();
            }

        sleep(1);
    }
}

void mythreadgclientplay::play_start()
{
   state = "start";
}

void mythreadgclientplay::play_stop()
{
  state = "stop";
   gpio->info_mode = 3;
  mgclient->play_stop();
}
