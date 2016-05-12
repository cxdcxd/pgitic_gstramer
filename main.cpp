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


#include "mediaapp.h"
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
#include <QtWidgets/QApplication>
#else
#include <QtGui/QApplication>
#endif
#include <QGst/Init>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGst::init(&argc, &argv);

    dcu_serial_mode = true;

    init_done = false;
    mtlog = new pgiticlog();
    mtlog->open();
    mtlog->start();
    mtlog->load_config();
    mtlog->load_licenses();

    app_exit = false;

    MainWindow w;
    w.setWindowFlags(Qt::WindowStaysOnTopHint);
    w.showFullScreen();

    //w.show();

    volumethread mtvolume;
    mtvolume.start();

    tcp_server_port = 3000;
    gst_init (0,0);
    audio_mode = "idle";

    mtlog->insert_log("core","PGITIC CORE CONTROLLER STARTED DONE ( PGITIC - GStreamer v1.1 GUI )","INFO");
    //=========================================================================================================
    //Create gpio interface
    gpio = new MyGpio();

    //Create USB/Serial Connection Interface
    //This Serial Interface is for communicating with PGITIC CU device
    mtserial = new serialthread();
    mtserial->baudrate = mtlog->serial1_baud;
    mtserial->port_name = "/dev/serial/by-id/" + mtlog->serial1_name;

   // std::cout<<mtserial->baudrate<<std::endl;
   // std::cout<<mtserial->port_name<<std::endl;

    mtserial->open();
    mtserial->start();

    //This Serial Interface is for communicationg with PGITIC Voting device
    mtserial2 = new serialthread();
    //mtserial2->baudrate = mtlog->serial2_baud;
    //mtserial2->port_name = mtlog->serial2_name;
    //mtserial2->start();
    //mtserial2->open();

    //Create gstreamer recording thread interface
    mtgclientrecord = new mythreadgclientrecord();
    mtgclientrecord->start();

    //Create gstreamer playing thread interface
    mtgclientplay = new mythreadgclientplay();
    mtgclientplay->start();

    //Create TCP/IP server
    mttcpserver = new MyServer();
    mttcpserver->startServer();

    //Create TCP/IP Client Connection Interface
    tcpsocket = new QThreadTCP();
    tcpsocket->connect();
    tcpsocket->start(); //start internal thread for connection managment

    //MediaApp media;
    //media.setWindowFlags(Qt::WindowStaysOnTopHint);
    //media.show();
    //Application Loop
    int exit_code = a.exec();

    mtlog->insert_log("core","PGITIC CORE DOWN","INFO");

    app_exit = true;

    gpio->kill();
    return exit_code;
}
