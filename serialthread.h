#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <mygpio.h>
#include <QProcess>
#include <wiringSerial.h>

class serialthread: public QThread
{
    Q_OBJECT
public:
    explicit serialthread(QObject *parent = 0);
    void run();
    bool open();
    void close();
    void send(std::string message);
    int device_id;
    bool active;
    int baudrate;
    std::string port_name;

};

#endif // SERIALTHREAD_H
