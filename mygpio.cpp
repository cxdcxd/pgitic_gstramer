#include "mygpio.h"

#include <statics.h>
#include <QCoreApplication>

UnixSignalWatcher *sigwatch;
//QByteArray *send_buffer;

MyGpio::MyGpio(QObject *parent) :
    QObject(parent)
{

    info_mode = 0;
    state = false;
    mtimer = new QTimer();
    connect(mtimer, SIGNAL(timeout()), this, SLOT(update()));

    mtlog->insert_log("GPIO","GPIO START","INFO");

    wiringPiSetup();

    pinMode(1,INPUT);

    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);

    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);

    sigwatch = new UnixSignalWatcher();
    sigwatch->watchForSignal(SIGINT);
    sigwatch->watchForSignal(SIGTERM);

    connect(sigwatch,SIGNAL(unixSignal(int)),this,SLOT(skill()));


    //send_buffer = new QByteArray();

    mtimer->start(100);

}

bool f = false;
bool f2 = false;
bool f3 = false;

void MyGpio::kill()
{
    info_mode = 3;

    state = false;

    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
}

void MyGpio::skill()
{

    kill();
    exit(0);
}


void MyGpio::send_request(int code)
{
    if ( code == 1 )
    {
        //1 => om
//        send_buffer->clear();
//        send_buffer->push_back('1');
//        send_buffer->push_back('3');
//        send_buffer->push_back('9');
//        send_buffer->push_back('4');
//        send_buffer->push_back('1');
//        send_buffer->push_back('7');
//        send_buffer->push_back('8');
//        send_buffer->push_back('7');
//        send_buffer->push_back('8');

//        qint64 l = 9;
//        tcpsocket->mainwrite(*send_buffer,l);
    }
    else if ( code == 2 )
    {
        //2 => off
//        send_buffer->clear();
//        send_buffer->push_back('1');
//        send_buffer->push_back('3');
//        send_buffer->push_back('9');
//        send_buffer->push_back('4');
//        send_buffer->push_back('2');
//        send_buffer->push_back('7');
//        send_buffer->push_back('8');
//        send_buffer->push_back('7');
//        send_buffer->push_back('8');

//        qint64 l = 9;
//        tcpsocket->mainwrite(*send_buffer,l);
    }
}

bool send_off = false;

void MyGpio::update()
{
    //10HZ pulling loop

//    if ( send_off )
//    {
//        send_off = false;
//        send_request(2);
//    }

//    if ( info_mode == 1 )
//    {
//        int x = digitalRead(1);

//        if ( x == 1)
//        {
//            if ( state == false && f == false)
//            {
//                f = true;
//                state = true;
//            }
//            if ( state == true && f == false)
//            {
//                f = true;
//                state = false;
//            }
//        }
//        else
//        {
//            f = false;
//        }
//    }


//    if ( state )
//    {
//        digitalWrite(5,LOW);
//    }
//    else
//    {
//        digitalWrite(5,HIGH);
//    }

    if ( info_mode == 2 )
    {
        state = false;
        //conneting...
        if ( f2 )
        {
            digitalWrite(6,LOW);
        }
        else
        {
            digitalWrite(6,HIGH);
        }

        f2 = !f2;

    }
    else
    {
         digitalWrite(6,HIGH);
    }


}
