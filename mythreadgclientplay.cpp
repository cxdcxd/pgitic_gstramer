#include "mythreadgclientplay.h"
#include "statics.h"

mythreadgclientplay::mythreadgclientplay(QObject *parent) :
    QThread(parent)
{

    played = false;
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
              played = true;
              state = "loop";
              gpio->info_mode = 2;
              qDebug("3");
              mgclient->play_start(filename);
            }

        sleep(1);
    }
}

void mythreadgclientplay::play_start( std::string filenamee)
{
    qDebug("2");
    filename = filenamee;
    state = "start";

}

void mythreadgclientplay::play_resume()
{
  mgclient->play_resume();
}

void mythreadgclientplay::play_pause()
{
   mgclient->play_pause();
}

void mythreadgclientplay::play_stop()
{
  state = "stop";
  gpio->info_mode = 3;
  mgclient->play_stop();
}
