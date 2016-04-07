//PGITIC CO
//Project Started : 1394/1/29
//TCP/IP BASED DIGITAL MICROPHONE
//EDWIN BABAIANS - edwin.babaians@gmail.com

//0.1 => project start
//0.2 => add TCP/IP library
//0.3 => add Audio/IN Audio/OUT
//0.4 => add wiringPi GPIO library
//0.5 => worked on raspberry II
//0.6 => add multi thread for wiringPI for rasp I & II

#include <QCoreApplication>
#include <QTimer>
#include "statics.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    gst_init (0,0);

    qDebug("PGITIC CORE CONTROLLER STARTED DONE ( PGITIC - GStreamer v1.0 )");

    gpio = new MyGpio();

    //tcpsocket = new QThreadTCP();
    //tcpsocket->connect();
    //tcpsocket->start(); //start internal thread for connection managment

    mtgclient1 = new myThreadGclient();
    mtgclient1->port = 5000;
    mtgclient1->name = "1";
    mtgclient1->start();

    //mtgclient2 = new myThreadGclient();
    //mtgclient2->port = 5011;
    //mtgclient2->name = "2";
    //mtgclient2->start();

    //mtgclient3 = new myThreadGclient();
    //mtgclient3->port = 5012;
    //mtgclient3->name = "3";
    //mtgclient3->start();

    //mtgclient2 = new myThreadGclient();
    //mtgclient2->port = 5012;
    //mtgclient2->start();

    //mtgserver = new myThreadGserver();
    //mtgserver->start();

    int exit_code = a.exec();
    qDebug("PGITIC CORE DOWN");
    gpio->kill();
    return exit_code;
}
