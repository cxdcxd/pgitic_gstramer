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
    list_tcpclientslist.clear();

    std::string _info  = "PGITIC Clients : [" +  QString::number(clients.size()).toStdString() + "]" + "Connected Client List : ";
    mtlog->insert_log("tcpserver", _info.c_str(),"DEBUG");

    foreach ( QTcpSocket *item, clients)
    {
        QString remote_ip = item->peerAddress().toString();



         _info  = remote_ip.toStdString();
        mtlog->insert_log("tcpserver",_info.c_str(),"DEBUG");

        list_tcpclientslist.push_back(remote_ip.toStdString().c_str());
    }
}

int MyServer::get_id(QString ip)
{
    QStringList pieces =  ip.split( "." );
    QString num = pieces.value(3);

    int num_int = num.toInt();


    return num_int;
}

void MyServer::update()
{

    if (  send_buffer != "" )
    {
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

        if ( exitcode != 0 )
        {
            std::string _info = "Ping Error for : " + remote_ip.toStdString() ;
            mtlog->insert_log("",_info.c_str(),"ERROR");
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

    mtlog->insert_log("tcpserver","PGITIC TCP SERVER START","INFO");
    int port = tcp_server_port;
    if(!this->listen(QHostAddress::Any, port))
    {
         mtlog->insert_log("tcpserver","Couldnot start server","ERROR");
    }
    else
    {
         std::string _info = "Listening to port : " + QString::number(port).toStdString();
         mtlog->insert_log("tcpserver",_info.c_str(),"INFO");
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
    std::string _info = "Client disconnected : " + client->peerAddress().toString().toStdString();
    mtlog->insert_log("tcpserver",_info.c_str(),"ERROR");

    clients.remove(client);
    print_client_list();
}


