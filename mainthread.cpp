#include "mainthread.h"
#include "statics.h"
#include "stdio.h"
#include "iostream"

myMainThreadx::myMainThreadx(QObject *parent) :
    QThread(parent)
{

}

void myMainThreadx::run()
{
    app_exit = false;
    counter = 0;

    while(app_exit == false)
    {
        if ( counter == 5 )
        {
           mtgclientrecord->recorde_start("out.mp3");
        }

        if ( counter == 10 )
        {

          mtgclientrecord->recorde_stop();
        }

        if ( counter == 15 )
        {
          mtgclientplay->play_start("out.mp3");
        }

        if ( counter == 20 )
        {
          mtgclientplay->play_stop();
          counter = 0;
          app_exit = true;
        }


        sleep(1);
        counter++;


    }


}
