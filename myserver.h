#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTimer>
#include <QProcess>

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);
    void startServer();
    void deleteLater();
    QTimer *timer;
    QTimer *ping_timer;
    void logic_process(QByteArray buffer,QString ip);
    int get_id(QString ip);
    QProcess *process;

signals:
    
public slots:
   void readyRead();
   void disconnected();
   void update();
   void ping_checker();
   void print_client_list();

protected:
    void incomingConnection(int socketDescriptor);
};

#endif // MYSERVER_H
