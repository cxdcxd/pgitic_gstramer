#ifndef MYGPIOTHREAD_H
#define MYGPIOTHREAD_H

#include <QThread>

class MyGpioThread : public QThread
{
    Q_OBJECT
public:
    explicit MyGpioThread(QObject *parent = 0);
    void run();

signals:
    
public slots:
    
};

#endif // MYGPIOTHREAD_H
