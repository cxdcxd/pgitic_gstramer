#ifndef QTHREADTCP_H
#define QTHREADTCP_H

#include <QThread>
#include <QTcpSocket>
#include <mygpio.h>

class QThreadTCP : public QThread
{
    Q_OBJECT
public:
    explicit QThreadTCP(QObject *parent = 0);
    void run();
    void mainwrite(QByteArray buf,qint64 len);
    void connect();
signals:
    
public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void update();

private:
    QTcpSocket *socket;
    bool connection_loop;
    QTimer *timer;
};

#endif // QTHREADTCP_H
