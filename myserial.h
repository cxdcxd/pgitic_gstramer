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

signals:

public slots:

};

#endif
