#include "myserial.h"
#include "QDir"
#include "iostream"

myserialq::myserialq(QObject *parent) :
    QObject(parent)
{

}

void myserialq::start()
{
    qDebug("Serial Interface Started");
    int result = serialOpen("/dev/serial/by-id/usb-Prolific_Technology_Inc._USB-Serial_Controller-if00-port0",9600);

    std::cout<<"SerialOpen ? "<<result<<std::endl;

    serialPrintf(result,"hello from pi");
    serialClose(result);
    qDebug("Serial Interface Finished");
}
