//PGITIC CO
//Project Started : 1394/1/29
//Project Phase II Started : 1395/1/18

//TCP/IP BASED DIGITAL MICROPHONE - RaspberyPi II
//EDWIN BABAIANS - edwin.babaians@gmail.com

//0.1 => project start
//0.2 => add TCP/IP library
//0.3 => add Audio/IN Audio/OUT
//0.4 => add wiringPi GPIO library
//0.5 => worked on raspberry II
//0.6 => add multi thread for wiringPI for rasp I & II
//1.0 => add record and play functionality to program
//1,1 => add gui to application

#include <QApplication>
#include <QTimer>
#include "statics.h"
#include "mainwindow.h"
#include "QDir"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    gst_init (0,0);

    qDebug("PGITIC CORE CONTROLLER STARTED DONE ( PGITIC - GStreamer v1.1 GUI )");

    gpio = new MyGpio();

    //tcpsocket = new QThreadTCP();
    //tcpsocket->connect();
    //tcpsocket->start(); //start internal thread for connection managment

    mtserial = new myserialq();
    mtserial->start();

    mtgclientrecord = new mythreadgclientrecord();
    mtgclientrecord->start();

    mtgclientplay = new mythreadgclientplay();
    mtgclientplay->start();

    mttcpserver = new MyServer();
    mttcpserver->startServer();

    int exit_code = a.exec();
    qDebug("PGITIC CORE DOWN");

    gpio->kill();
    return exit_code;
}
