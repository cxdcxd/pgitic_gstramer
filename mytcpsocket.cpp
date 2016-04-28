#include "mytcpsocket.h"
#include "mygpiothread.h"
#include "statics.h"

MyGpio *gpiooo;

MyTcpSocket::MyTcpSocket(QObject *parent) :
    QObject(parent)
{
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));
}


void MyTcpSocket::doConnect(MyGpio &xb)
{
    gpiooo = &xb;
    gpiooo->info_mode = 0;

    QString _port = mtlog->remote_port.c_str();
    socket->connectToHost(mtlog->remote_ip.c_str(),_port.toInt());

    if(!socket->waitForConnected(5000))
    {
        gpiooo->info_mode = 2;
    }

     gpiooo->info_mode = 1;
}

void MyTcpSocket::mainwrite(QByteArray buf, qint64 len)
{
    //QByteArray a;
    socket->write(buf.data(),len);
}

void MyTcpSocket::connected()
{



}

void MyTcpSocket::disconnected()
{

}

void MyTcpSocket::bytesWritten(qint64 bytes)
{
    //qDebug() << bytes << " bytes written... ";
}


void MyTcpSocket::readyRead()
{
    qDebug() << "reading...";
    qDebug() << socket->readAll();
}
