#ifndef MYSERIALQ_H
#define MYSERIALQ_H

#include <QObject>
#include <wiringSerial.h>

class myserialq : public QObject
{
    Q_OBJECT
public:
    explicit myserialq(QObject *parent = 0);
    void start();
    bool open();
    void close();
    void send(std::string message);
    int device_id;
    bool active;
    int baudrate;
    std::string port_name;
signals:

public slots:

};

#endif
