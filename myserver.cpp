#include "myserver.h"

#include <QList>
#include "stdio.h"
#include "iostream"
#include "statics.h"
#include "QProcess"
#include "iostream"

QByteArray buffer;

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{

}

void MyServer::print_client_list()
{
    qDebug() << "PGITIC Clients : ["<< clients.size() << "]" << "Connected Client List : ";
    foreach ( QTcpSocket *item, clients)
    {
        QString remote_ip = item->peerAddress().toString();
        std::cout << coutcolor_brown << remote_ip.toStdString() << coutcolor0 << std::endl;
    }
    qDebug() << "============================================";
}

int MyServer::get_id(QString ip)
{
    QStringList pieces =  ip.split( "." );
    QString num = pieces.value( 3 );

    int num_int = num.toInt();

    //if ( num_int < 0 ) num_int = -1;  //MIN IS 0
    //if ( num_int > 20 ) num_int = -1; //MAX IS 19

    return num_int;
}

void MyServer::update()
{

    if (  send_buffer != "" )
    {
//        QStringList pieces =  send_buffer.split( "," );
//        QString a1 = pieces.value( 0 );
//        QString a2 = pieces.value( 1 );

        foreach ( QTcpSocket *item, clients)
        {
              QString remote_ip = item->peerAddress().toString();
              int item_id = get_id(remote_ip);

              buffer.clear();
              buffer.push_back("20"); //ON
              item->write(buffer);
        }

        send_buffer = "";
    }
}

void MyServer::ping_checker()
{
    //CHECK THE CLIENT AND NETWORK INTERFAC CABLE AND CONNETIONS
    //PING EACH CLIENT

    foreach ( QTcpSocket *item, clients)
    {
        QString remote_ip = item->peerAddress().toString();

        process->start("ping",QStringList() << "-c 1" << remote_ip);
        process->waitForFinished();
        int exitcode = process->exitCode();

        if ( exitcode == 0 )
        {
            //qDebug("Ping Ok");
        }
        else
        {
            std::cout << coutcolor_red << "Ping Error for : " << remote_ip.toStdString() << coutcolor0 << std::endl;
            item->close();
        }
    }


}

void MyServer::startServer()
{
    process = new QProcess();
    process->closeReadChannel(QProcess::StandardOutput);
    process->closeReadChannel(QProcess::StandardError);

    timer = new QTimer();
    ping_timer = new QTimer();

    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    connect(ping_timer,SIGNAL(timeout()),this,SLOT(ping_checker()));

    qDebug() << "PGITIC SERVER START";
    int port = 3000;
    if(!this->listen(QHostAddress::Any, port))
    {
        qDebug() << "Could not start server";
    }
    else
    {
        std::cout << coutcolor_magenta << "Listening to port : " << port << coutcolor0 << std::endl;
    }

    timer->start(100); //send loop
    ping_timer->start(1000); //ping loop
}

void MyServer::incomingConnection(int socketfd)
{
    QTcpSocket *client = new QTcpSocket(this);
    client->setSocketDescriptor(socketfd);
    clients.insert(client);

    print_client_list();

    connect(client, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(client, SIGNAL(disconnected()), this, SLOT(disconnected()));
}

void MyServer::logic_process(QByteArray buffer,QString ip)
{
    int id = get_id(ip);
    qDebug() << "GET COMMAND ******************** FROM CLIENT " << id ;


}

void MyServer::readyRead()
{
    QTcpSocket *client = (QTcpSocket*)sender();
    QByteArray Data = client->readAll();
    QString remote_ip = client->peerAddress().toString();
    logic_process(Data,remote_ip);
}

void MyServer::disconnected()
{
    QTcpSocket *client = (QTcpSocket*)sender();
    std::cout << coutcolor_red << "Client disconnected : " << client->peerAddress().toString().toStdString() << coutcolor0 << std::endl;
    clients.remove(client);
}


