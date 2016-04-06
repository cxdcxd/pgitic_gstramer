#ifndef MYGPIO_H
#define MYGPIO_H

#include <QObject>
#include <QTimer>
#include "wiringPi.h"
#include "sigwatch.h"

class MyGpio : public QObject
{
    Q_OBJECT
public:
    explicit MyGpio(QObject *parent = 0);
    QTimer *mtimer;
    bool state;
    int info_mode;
    void kill();
    void send_request(int code);

signals:
    
public slots:
     void update();
     void skill();
    
};

#endif // MYGPIO_H
