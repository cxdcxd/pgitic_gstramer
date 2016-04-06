#include "mygpiothread.h"

MyGpioThread::MyGpioThread(QObject *parent) :
    QThread(parent)
{

}

void MyGpioThread::run()
{
    qDebug("GPIO Thread START ");



}
