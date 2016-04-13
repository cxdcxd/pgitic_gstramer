#ifndef QTHREADTCP_H
#define QTHREADTCP_H

#include <QThread>
#include <QTcpSocket>
#include <mygpio.h>
#include <QProcess>

class QThreadTCP : public QThread
{
    Q_OBJECT
public:
    explicit QThreadTCP(QObject *parent = 0);
    void run();
    void mainwrite(QByteArray buf,qint64 len);
    void connect();
    QProcess *processclient;

    //========================= commands
    void read_mic_number();
    void set_camera_model(std::string model);
    void set_camera_number(int number);
    void set_controller_model(std::string name);
    void debug_test_serial();
    void debug_test_camera();
    void debug_test_version();
    void set_camera_mode(bool manual);
    void set_home();
    void call_home();
    void set_point(int mic_number);
    void call_point(int mic_number);
    bool isconnected;


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
