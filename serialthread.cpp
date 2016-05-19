#include "serialthread.h"
#include "QProcess"
#include "statics.h"
#include "stdlib.h"

serialthread::serialthread(QObject *parent) :
    QThread(parent)
{
    device_id = -1;
    active = false;
    countert1 = 0;
    buffer.clear();

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

    //std::cout<<"GET :"<<_get_str.toStdString()<<std::endl;

    if (_get_str.contains("\n") && _get_str.contains("\r") && get_str.length() == 2)
    {
       return;
    }

    if (get_str == "\r") return;
    if (get_str == "\n") return;

    //std::cout<<_get_str.toStdString()<<std::endl;
    //======================= log data to hardware log

    _get_str = _get_str.replace("(", "");
    _get_str = _get_str.replace(")", "");
    _get_str = _get_str.trimmed();

    QStringList pieces = _get_str.split(",");

    try
    {
        if ( pieces.length() > 1 )
        {
          //we have data
          QString sender = pieces.at(0);
          QString type = pieces.at(1);
          QString from = pieces.at(2);
          QString info = pieces.at(3);

          if ( serial_log_enable )
          mtlog->insert_hard_log(sender,info,type,from);

          if ( dcu_serial_mode == true )
          {
              tcpsocket->final_process(info);
          }

        }
        else
        {
             if ( serial_log_enable )
             mtlog->insert_log("pgiticlog","Bad serial format","ERROR");
        }
    }
    catch ( std::exception e)
    {
        mtlog->insert_log("pgiticlog","Bad serial format","WARN");
    }



}

void serialthread::run()
{
    buffer.clear();


    while(app_exit == false)
    {
        if ( device_id > 0 )
        {
            //std::cout<< "read"<<std::endl;

            if ( serialDataAvail(device_id) != 0)
            {
                //std::cout<<"check"<<std::endl;
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

                if ( countert1 > 55 )
                {
                    countert1 = 0;
                }

           }
        }
        msleep(1);
    }


}

bool serialthread::open()
{
    mtlog->insert_log("Usbserial","Serial Interface Started","INFO");

    active = false;
    device_id = -1;


    device_id = serialOpen(port_name.c_str(),baudrate);

    if ( device_id > 0 )
    {
        mtlog->insert_log("Usbserial","Serial Interface OK","INFO");
        active = true;
        return true;
    }
    else
    {
        mtlog->insert_log("Usbserial","Serial Interface Open Failed","ERROR");
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
    //std::cout<<"sending :"<<message<<std::endl;
    if ( device_id < 0 ) return;
    try
    {
    serialPrintf(device_id,message.c_str());
    // bar_info = "Send...!";
    if ( serial_log_enable )
    mtlog->insert_hard_log("PI",message.c_str(),"INFO",name.c_str());
    }
    catch ( std::exception e)
    {
        // std::cout<<"error "<<std::endl;
    }
}
