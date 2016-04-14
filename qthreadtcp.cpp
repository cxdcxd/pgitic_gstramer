
#include "qthreadtcp.h"
#include "QProcess"
#include "statics.h"
#include "stdlib.h"

QThreadTCP::QThreadTCP(QObject *parent) :
    QThread(parent)
{


}

void QThreadTCP::update()
{
    if ( socket->isOpen() == false )
    {
        qDebug("TRY CONNECTING ...");
        isconnected = false;
        socket->connectToHost(tcp_client_remote_ip.c_str(), tcp_client_remote_port);

        if(!socket->waitForConnected(500))
        {
            qDebug() << "Error: " << socket->errorString();
            socket->close();
            gpio->info_mode = 0;
        }
    }
    else
    {
        isconnected = true;
        processclient->start("ping",QStringList() << "-c 1" << tcp_client_remote_ip.c_str());
        processclient->waitForFinished();
        int exitcode = processclient->exitCode();

        if ( exitcode == 0 )
        {
            //qDebug("PING OK");
        }
        else
        {
            gpio->info_mode = 0;
            socket->close();
        }
    }


}

void QThreadTCP::set_camera_number(int number)
{

    QString _num = QString::number(number);
    std::string _number = _num.toStdString();
    std::string command = "(SCAMN," + _number + ";" + "0" + ":" + "0" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());

}

void QThreadTCP::set_camera_mode(bool manual)
{
    std::string command;

    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(camera_speed);
    std::string _number2 = _num2.toStdString();

    if (manual)
        command = "(MODE,M;" + _number1 + ":S." + _number2 + ")";
    else
        command = "(MODE,A;" + _number1 + ":S." + _number2 + ")";

    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::set_controller_model(std::string name)
{
    int index = -1;
    for ( int i = 0 ; i < list_controller_models.size() ; i++ )
    {
        if ( list_controller_models.at(i) == name )
        {
            index = i;
            break;
        }
    }

    QString _num = QString::number(index);
    std::string _number = _num.toStdString();

    std::string command = "(SCRT," + name + ";" +  _number + ":0.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::set_camera_model(std::string model)
{
    int index = -1;
    for ( int i = 0 ; i < list_camera_models.size() ; i++ )
    {
        if ( list_camera_models.at(i) == model )
        {
            index = i;
            break;
        }
    }

    QString _num = QString::number(index);
    std::string _number = _num.toStdString();

    std::string command = "(SCAMT," + model + ";" +  _number + ":0.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::set_home()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(SETP," + camera_model + ";" + _number1 + ":255.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::set_point(int mic_number)
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mic_number);
    std::string _number2 = _num2.toStdString();

    std::string command = "(SETP," + camera_model + ";" + _number1 + ":" + _number2 + ".0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::call_home()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command ="(CALLP," + camera_model + ";" + _number1 + ":255.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::call_point(int mic_number)
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mic_number);
    std::string _number2 = _num2.toStdString();

    std::string command = "(CALLP," + camera_model + ";" + _number1 + ":" + _number2 + ".0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::read_mic_number()
{
    std::string command = "(RMICN,0;0:0.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::debug_test_camera()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(CAMT," + camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::debug_test_serial()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(PORTT," + camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::debug_test_version()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(RHADV," + camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}


void QThreadTCP::connect()
{
    processclient = new QProcess();
    processclient->closeReadChannel(QProcess::StandardOutput);
    processclient->closeReadChannel(QProcess::StandardError);

    connection_loop = true;
    socket = new QTcpSocket();

    timer = new QTimer(this);
    QThreadTCP::QObject:: connect(timer, SIGNAL(timeout()), this, SLOT(update()));

    QThreadTCP::QObject::connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    QThreadTCP::QObject::connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    QThreadTCP::QObject::connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    QThreadTCP::QObject::connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));

    timer->start(1000);
}

void QThreadTCP::set_camera_dir(int mode)
{
    if (mode == 3) status = "R";
    else if (mode == 2) status = "UR";
    else if (mode == 1) status = "U";
    else if ( mode == 8) status = "UL";
    else if (mode == 7) status = "L";
    else if (mode == 6) status = "DL";
    else if (mode == 5) status = "D";
    else if (mode == 4) status = "DR";
    else status = "S";

    if ( status == "R" )
    {
        if (joyx_reversed)
            status = "L";
    }
    else
        if (status == "L")
        {
            if (joyx_reversed)
                status = "R";
        }
        else
            if (status == "U")
            {
                if (joyy_reversed)
                    status = "D";
            }
            else
                if (status == "D")
                {
                    if (joyy_reversed)
                        status = "U";
                }
                else
                    if (status == "UR")
                    {
                        if (joyx_reversed == true && joyy_reversed == false)
                        {
                            status = "UL";
                        }
                        else if (joyx_reversed == false && joyy_reversed == true)
                        {
                            status = "DR";
                        }
                        else if (joyx_reversed == true && joyy_reversed == true)
                        {
                            status = "DL";
                        }
                    }
                    else
                        if ( status == "UL")
                        {
                            if (joyx_reversed == true && joyy_reversed == false)
                            {
                                status = "UR";
                            }
                            else if (joyx_reversed == false && joyy_reversed == true)
                            {
                                status = "DL";
                            }
                            else if (joyx_reversed == true && joyy_reversed == true)
                            {
                                status = "DR";
                            }
                        }
                        else
                            if ( status == "DR")
                            {

                                if (joyx_reversed == true && joyy_reversed == false)
                                {
                                    status = "DL";
                                }
                                else if (joyx_reversed == false && joyy_reversed == true)
                                {
                                    status = "UR";
                                }
                                else if (joyx_reversed == true && joyy_reversed == true)
                                {
                                    status = "UL";
                                }
                            }
                            else
                                if ( status == "DL")
                                {
                                    if (joyx_reversed == true && joyy_reversed == false)
                                    {
                                        status = "DR";
                                    }
                                    else if (joyx_reversed == false && joyy_reversed == true)
                                    {
                                        status = "UL";
                                    }
                                    else if (joyx_reversed == true && joyy_reversed == true)
                                    {
                                        status = "UR";
                                    }
                                }

    QString num1 = QString::number(camera_id);
    QString num2 = QString::number(camera_speed);
    std::string _num1 = num1.toStdString();
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + camera_model + ";" + _num1 + ":" + status + "."  + _num2 + ")";

}

void QThreadTCP::run()
{


}

void QThreadTCP::mainwrite(QByteArray buf, qint64 len)
{
    //QByteArray a;
    socket->write(buf.data(),len);

}

void QThreadTCP::connected()
{
    qDebug() << "connected...";
    gpio->info_mode = 1;
}

void QThreadTCP::disconnected()
{
    qDebug() << "disconnected...";
    gpio->info_mode = 0;
    socket->close();

}

void QThreadTCP::bytesWritten(qint64 bytes)
{
    //qDebug() << bytes << " bytes written... ";
}

void QThreadTCP::readyRead()
{
    QByteArray x = socket->readAll();

    qDebug() << "reading..." << x;
    // qDebug() << x.size();
    // qDebug() << x.at(0);
    //     qDebug() << x.at(1);

    if ( x.at(0) == '2')
    {
        qDebug() << "on";
        gpio->state = true;
    }
    if ( x.at(0) == '4')
    {
        qDebug() << "off";
        gpio->state = false;
    }

    //QString item = QString::fromUtf8(array.data(),array.size());

}

