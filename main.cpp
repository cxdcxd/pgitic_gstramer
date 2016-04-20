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
//1.2 => add gstreamer recording & playback


#include <QApplication>
#include <QTimer>
#include "statics.h"
#include "mainwindow.h"
#include "QDir"
#include "userlogin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    app_exit = false;

    MainWindow w;
    w.showFullScreen();
    //w.show();

    tcp_server_port = 3000;
    gst_init (0,0);
    audio_mode = "idle";

    qDebug("PGITIC CORE CONTROLLER STARTED DONE ( PGITIC - GStreamer v1.1 GUI )");

    //===========================================================================================
    //Create gpio interface
    gpio = new MyGpio();

    //Create USB/Serial Connection Interface
    mtserial = new serialthread();
    mtserial->start();
    mtserial->open();

    //Create gstreamer recording thread interface
    mtgclientrecord = new mythreadgclientrecord();
    mtgclientrecord->start();

    //Create gstreamer playing thread interface
    mtgclientplay = new mythreadgclientplay();
    mtgclientplay->start();

    //Create TCP/IP server
    mttcpserver = new MyServer();
    mttcpserver->startServer();

    mtlog = new pgiticlog();
    mtlog->start();
    mtlog->load_config();

    //Create TCP/IP Client Connection Interface
    tcpsocket = new QThreadTCP();
    tcpsocket->connect();
    tcpsocket->start(); //start internal thread for connection managment

    //Application Loop
    int exit_code = a.exec();
    qDebug("PGITIC CORE DOWN");

    app_exit = true;
    //Kill GPIO
    gpio->kill();
    return exit_code;
}
