
#include "qthreadtcp.h"
#include "QProcess"
#include "statics.h"

QProcess *process;

QThreadTCP::QThreadTCP(QObject *parent) :
    QThread(parent)
{


}

void QThreadTCP::update()
{
    if ( socket->isOpen() == false )
    {
        qDebug("TRY CONNECTING ...");

        gpio->info_mode = 0;

        socket->connectToHost("192.168.16.100", 1234);

        if(!socket->waitForConnected(500))
        {
            qDebug() << "Error: " << socket->errorString();
            socket->close();
            gpio->info_mode = 0;
        }
    }
    else
    {
        gpio->info_mode = 1;

        process->start("ping",QStringList() << "-c 1" << "192.168.16.100");
        process->waitForFinished();
        int exitcode = process->exitCode();

        //int exitcode = QProcess::execute("ping",QStringList() << "-c 1" << "192.168.16.100");
        if ( exitcode == 0 )
        {
           //qDebug("PING OK");
        }
        else
        {
           mtgserver->xstop();
           gpio->info_mode = 0;
           qDebug("Server Ping Error : Network Problem Detected...");
           socket->close();
        }


        //process->kill();

    }


}

void QThreadTCP::connect()
{
    process = new QProcess();
    process->closeReadChannel(QProcess::StandardOutput);
    process->closeReadChannel(QProcess::StandardError);

    connection_loop = true;
    socket = new QTcpSocket();

    timer = new QTimer(this);
    QThreadTCP::QObject:: connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    QThreadTCP::QObject::connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    QThreadTCP::QObject::connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    QThreadTCP::QObject::connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    QThreadTCP::QObject::connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));


    gpio->info_mode = 0;

    timer->start(1000);


}

void QThreadTCP::run()
{


}

void QThreadTCP::mainwrite(QByteArray buf, qint64 len)
{
    //QByteArray a;
    socket->write(buf.data(),len);

}

void QThreadTCP::connected()
{
    qDebug() << "connected...";  
    gpio->info_mode = 1;
}

void QThreadTCP::disconnected()
{
   qDebug() << "disconnected...";
   gpio->info_mode = 0;
   socket->close();

}

void QThreadTCP::bytesWritten(qint64 bytes)
{
    //qDebug() << bytes << " bytes written... ";
}

void QThreadTCP::readyRead()
{
    QByteArray x = socket->readAll();

     qDebug() << "reading..." << x;
    // qDebug() << x.size();
     // qDebug() << x.at(0);
     //     qDebug() << x.at(1);

    if ( x.at(0) == '2')
    {
        qDebug() << "on";
        gpio->state = true;
        mtgserver->xstart();
    }
    if ( x.at(0) == '4')
    {
        qDebug() << "off";
        gpio->state = false;
        mtgserver->xstop();
    }

}

