#include "volumethread.h"
#include "QProcess"

volumethread::volumethread(QObject *parent) :
    QThread(parent)
{

}

void volumethread::run()
{
    volume_process = new QProcess();
    volume_process->closeReadChannel(QProcess::StandardOutput);
    volume_process->closeReadChannel(QProcess::StandardError);

    while(app_exit == false)
    {

        if ( speaker_volume_temp != mtlog->speaker_volume)
        {
           // std::cout<<"changed"<<std::endl;
            mtlog->speaker_volume = speaker_volume_temp;
            std::string _val = QString::number(mtlog->speaker_volume).toStdString() + "%";
            volume_process->start("amixer",QStringList() << "sset" << "Master" <<  _val.c_str());
            volume_process->waitForFinished();
            mtlog->save_config();
        }
        else
        {
           // std::cout<<"ok"<<std::endl;
        }


       msleep(500);
    }
}



