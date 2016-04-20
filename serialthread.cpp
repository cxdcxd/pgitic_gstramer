#include "serialthread.h"
#include "QProcess"
#include "statics.h"
#include "stdlib.h"

serialthread::serialthread(QObject *parent) :
    QThread(parent)
{


}

void serialthread::process()
{
    std::string get_str;
    for ( int i = 0 ; i < buffer.size() ; i++)
    {
        get_str.push_back(buffer.at(i));
    }

    buffer.clear();

    QString _get_str = get_str.c_str();

    if (_get_str.contains("\n") && _get_str.contains("\r") && get_str.length() == 2)
    {
       return;
    }

    if (get_str == "\r") return;
    if (get_str == "\n") return;

    std::cout<<"Serial Get :"<<get_str<<std::endl;
}

void serialthread::run()
{
    buffer.clear();


    while(app_exit == false)
    {
        if ( device_id > 0 )
        {
            if ( serialDataAvail(device_id) != 0)
            {
                countert1 = 0;
                int a = serialGetchar(device_id);
                char lc = (char)a;
                if (lc != '\n' )
                {
                    buffer.push_back(lc);
                }
                else
                {
                    //process buffer
                    process();
                }
            }
            else
            {
                countert1++;
                if (countert1 > 50 && buffer.size() != 0)
                {
                    countert1 = 0;
                    //process buffer
                    process();

                }

            }
        }
        msleep(1);
    }


}

bool serialthread::open()
{
    qDebug("Serial Interface Started");
    active = false;
    device_id = -1;
    baudrate = 9600;
    port_name = "/dev/serial/by-id/usb-Prolific_Technology_Inc._USB-Serial_Controller-if00-port0";

    device_id = serialOpen(port_name.c_str(),baudrate);
    std::cout<<"SerialOpen ? "<<device_id<<std::endl;
    if ( device_id > 0 )
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

void serialthread::close()
{
    if ( device_id < 0 ) return;
    serialClose(device_id);
    active = false;
}

void serialthread::send(std::string message)
{
    if ( device_id < 0 ) return;
    serialPrintf(device_id,message.c_str());
    bar_info = "Send...!";
}
