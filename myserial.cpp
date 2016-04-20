#include "myserial.h"
#include "QDir"
#include "iostream"
#include "statics.h"

myserialq::myserialq(QObject *parent) :
    QObject(parent)
{

}

void myserialq::start()
{
    qDebug("Serial Interface Started");
    active = false;
    device_id = -1;
    baudrate = 9600;
    port_name = "/dev/serial/by-id/usb-Prolific_Technology_Inc._USB-Serial_Controller-if00-port0";
}

bool myserialq::open()
{
   device_id = serialOpen(port_name.c_str(),baudrate);
   std::cout<<"SerialOpen ? "<<device_id<<std::endl;
   if ( device_id != -1 )
   {
       active = true;
       return true;
   }
   else
   {
       active = false;
       return false;
   }
}

void myserialq::close()
{
    if ( device_id == -1 ) return;
    serialClose(device_id);
    active = false;
}

void myserialq::send(std::string message)
{
     if ( device_id == -1 ) return;
     serialPrintf(device_id,message.c_str());
     bar_info = "Send...!";
}
