
#include "qthreadtcp.h"
#include "QProcess"
#include "statics.h"
#include "stdlib.h"

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
        isconnected = false;

        socket->connectToHost(tcp_client_remote_ip.c_str(), tcp_client_remote_port);

        if(!socket->waitForConnected(500))
        {
            qDebug() << "Error: " << socket->errorString();
            socket->close();
            gpio->info_mode = 0;
        }
    }
    else
    {
        isconnected = true;
        gpio->info_mode = 1;

        processclient->start("ping",QStringList() << "-c 1" << tcp_client_remote_ip.c_str());
        processclient->waitForFinished();
        int exitcode = processclient->exitCode();

        if ( exitcode == 0 )
        {
           //qDebug("PING OK");
        }
        else
        {
           gpio->info_mode = 0;
           socket->close();
        }
    }


}

void QThreadTCP::set_camera_number(int number)
{
QString _num = QString::number(number);
std::string _number = _num.toStdString();
std::string command = "(SCAMN," + _number + ";" + "0" + ":" + "0" + "." + "0" + ")";

QByteArray array = command.c_str();

//QString item = QString::fromUtf8(array.data(),array.size());
mainwrite(array,array.size());

}

void QThreadTCP::set_camera_mode(bool manual)
{

}

void QThreadTCP::set_camera_model(std::string model)
{

}

void QThreadTCP::set_home()
{

}

void QThreadTCP::set_point(int mic_number)
{

}

void QThreadTCP::call_home()
{

}

void QThreadTCP::call_point(int mic_number)
{

}

void QThreadTCP::read_mic_number()
{

}

void QThreadTCP::debug_test_camera()
{

}

void QThreadTCP::debug_test_serial()
{

}

void QThreadTCP::debug_test_version()
{

}


void QThreadTCP::connect()
{
    processclient = new QProcess();
    processclient->closeReadChannel(QProcess::StandardOutput);
    processclient->closeReadChannel(QProcess::StandardError);

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
    }
    if ( x.at(0) == '4')
    {
        qDebug() << "off";
        gpio->state = false;
    }

}

