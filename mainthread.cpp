#include "mainthread.h"
#include "statics.h"
#include "stdio.h"
#include "iostream"

myMainThreadx::myMainThreadx(QObject *parent) :
    QThread(parent)
{
    printf("Main Thread Start\n");
}

void myMainThreadx::run()
{
    app_exit = false;
    counter = 0;

    while(app_exit == false)
    {
        if ( counter == 5 )
        {
           mtgclientrecord->recorde_start();
        }

        if ( counter == 10 )
        {
          mtgclientrecord->recorde_stop();
        }

        if ( counter == 15 )
        {
          mtgclientplay->play_start();
        }

        if ( counter == 20 )
        {
          mtgclientplay->play_stop();
          counter = 0;
          app_exit = true;
        }


        sleep(1);
        counter++;
        std::cout<<"Counter "<<counter<<std::endl;

    }

     printf("Mainthread Exited\n");
}