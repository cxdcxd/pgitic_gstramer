
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
        mtlog->insert_log("threadtcp","TRY CONNECTING ...","INFO");
        isconnected = false;
        QString _port = mtlog->remote_port.c_str();
        socket->connectToHost(mtlog->remote_ip.c_str(), _port.toInt());

        if(!socket->waitForConnected(500))
        {

            mtlog->insert_log("threadtcp","Connection Failed","ERROR");
            socket->close();
            gpio->info_mode = 0;
        }
    }
    else
    {
        isconnected = true;

        processclient->start("ping",QStringList() << "-c 1" << mtlog->remote_ip.c_str());
        processclient->waitForFinished();
        int exitcode = processclient->exitCode();

        if ( exitcode == 0 )
        {

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

    QString _num2 = QString::number(mtlog->camera_speed);
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

    std::string command = "(SETP," + mtlog->camera_model + ";" + _number1 + ":255.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::set_point(int mic_number)
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mic_number);
    std::string _number2 = _num2.toStdString();

    std::string command = "(SETP," + mtlog->camera_model + ";" + _number1 + ":" + _number2 + ".0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::call_home()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command ="(CALLP," + mtlog->camera_model + ";" + _number1 + ":255.0)";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::call_point(int mic_number)
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mic_number);
    std::string _number2 = _num2.toStdString();

    std::string command = "(CALLP," + mtlog->camera_model + ";" + _number1 + ":" + _number2 + ".0)";
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

    std::string command = "(CAMT," + mtlog->camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::debug_test_serial()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(PORTT," + mtlog->camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::debug_test_version()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    std::string command = "(RHADV," + mtlog->camera_model + ";" + _number1 + ":" + "255" + "." + "0" + ")";
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

    timer->start(10000);
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
        if (mtlog->joyx)
            status = "L";
    }
    else
        if (status == "L")
        {
            if (mtlog->joyx)
                status = "R";
        }
        else
            if (status == "U")
            {
                if (mtlog->joyy)
                    status = "D";
            }
            else
                if (status == "D")
                {
                    if (mtlog->joyy)
                        status = "U";
                }
                else
                    if (status == "UR")
                    {
                        if (mtlog->joyx == true && mtlog->joyy == false)
                        {
                            status = "UL";
                        }
                        else if (mtlog->joyx == false && mtlog->joyy == true)
                        {
                            status = "DR";
                        }
                        else if (mtlog->joyx == true && mtlog->joyy == true)
                        {
                            status = "DL";
                        }
                    }
                    else
                        if ( status == "UL")
                        {
                            if (mtlog->joyx == true && mtlog->joyy == false)
                            {
                                status = "UR";
                            }
                            else if (mtlog->joyx == false && mtlog->joyy == true)
                            {
                                status = "DL";
                            }
                            else if (mtlog->joyx == true && mtlog->joyy == true)
                            {
                                status = "DR";
                            }
                        }
                        else
                            if ( status == "DR")
                            {

                                if (mtlog->joyx == true && mtlog->joyy == false)
                                {
                                    status = "DL";
                                }
                                else if (mtlog->joyx == false && mtlog->joyy == true)
                                {
                                    status = "UR";
                                }
                                else if (mtlog->joyx == true && mtlog->joyy == true)
                                {
                                    status = "UL";
                                }
                            }
                            else
                                if ( status == "DL")
                                {
                                    if (mtlog->joyx == true && mtlog->joyy == false)
                                    {
                                        status = "DR";
                                    }
                                    else if (mtlog->joyx == false && mtlog->joyy == true)
                                    {
                                        status = "UL";
                                    }
                                    else if (mtlog->joyx == true && mtlog->joyy == true)
                                    {
                                        status = "UR";
                                    }
                                }

    QString num1 = QString::number(camera_id);
    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num1 = num1.toStdString();
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":" + status + "."  + _num2 + ")";

}

void QThreadTCP::run()
{


}

void QThreadTCP::mainwrite(QByteArray buf, qint64 len)
{
    //QByteArray a;
    socket->write(buf.data(),len);
}

void QThreadTCP::stop_cam()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mtlog->camera_speed);
    std::string _number2 = _num2.toStdString();
    std::string command = "(CAM," + mtlog->camera_model + ";" + _number1 + ":S." + _number2 + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::stop_focus()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mtlog->camera_speed);
    std::string _number2 = _num2.toStdString();
    std::string command = "(CAM," + mtlog->camera_model + ";" +  _number1 + ":FS." + _number2 + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::stop_iris()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mtlog->camera_speed);
    std::string _number2 = _num2.toStdString();
    std::string command = "(CAM," + mtlog->camera_model + ";" +  _number1 + ":IS." + _number2 + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());
}

void QThreadTCP::stop_zoom()
{
    QString _num1 = QString::number(camera_id);
    std::string _number1 = _num1.toStdString();

    QString _num2 = QString::number(mtlog->camera_speed);
    std::string _number2 = _num2.toStdString();
    std::string command = "(CAM," + mtlog->camera_model + ";" +  _number1 + ":ZS." +  _number2 + ")";
    QByteArray array = command.c_str();
    mainwrite(array,array.size());

}
void QThreadTCP::connected()
{
    mtlog->insert_log("threadtcp","Connected...","INFO");

    gpio->info_mode = 1;
}

void QThreadTCP::disconnected()
{
    mtlog->insert_log("threadtcp","Disconnected","ERROR");
    gpio->info_mode = 0;
    socket->close();
}

void QThreadTCP::bytesWritten(qint64 bytes)
{

}

void QThreadTCP::readyRead()
{
    QByteArray array = socket->readAll();
    QString item = QString::fromUtf8(array.data(),array.size());


    //=====================================
    item = item.replace("(", "");
    item = item.replace(")", "");
    item = item.trimmed();

    if (item.contains("Cam Mode"))
    {
        total_number = "CM";
        bar_info = "Cam Mode";
    }
    else
        if (item.contains("RMICN"))
        {
            QStringList pieces = item.split(",");

            if (pieces.value(1).length() == 1) pieces.value(1) = "0" + pieces.value(1);
            mic_number = pieces.value(1).toStdString();

        }
        else
            if (item.contains("Active Mic:*"))
            {
                mic_number = "00";
                QStringList pieces = item.split(",");
                if (pieces.value(1).length() == 1) pieces.value(1) = "0" + pieces.value(1);
                total_number = pieces.value(1).toStdString();
                cam_number = "00";
                mic_number = "00";

            }
            else
                if (item.contains("Mic:"))
                {
                    QStringList pieces = item.split(",");

                    if (pieces.value(1).length() == 1) pieces.value(1) = "0" + pieces.value(1);
                    if (pieces.value(3).length() == 1) pieces.value(3) = "0" + pieces.value(3);

                    mic_number = pieces.value(1).toStdString();
                    cam_number = pieces.value(3).toStdString();
                }
                else
                    if (item.contains("Call point"))
                    {
                        QStringList pieces = item.split(",");

                        if (pieces.value(1).length() == 1) pieces.value(1) = "0" + pieces.value(1);
                        if (pieces.value(3).length() == 1) pieces.value(3) = "0" + pieces.value(3);

                        mic_number = pieces.value(1).toStdString();
                        cam_number = pieces.value(3).toStdString();
                    }
                    else
                    {
                        if (item.contains("OK"))
                        {
                            bar_info = "OK";
                        }
                        else
                            if (item.contains("TCAM"))
                            {
                                QStringList pieces = item.split(",");
                                std::string rx = pieces.value(1).toStdString() + " | " + pieces.value(2).toStdString() + " | " + pieces.value(3).toStdString() + " | " + pieces.value(4).toStdString();
                                bar_info = rx;
                            }
                            else
                            {
                                if (item.contains("RHADV"))
                                {
                                    QStringList pieces = item.split(",");
                                    std::string rx = pieces.value(1).toStdString();
                                    bar_info = rx;
                                }
                            }

                    }
}

