#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"
#include "ctime"
#include "time.h"
#include "userlogin.h"
#include "joystickscene.h"
#include "QPixmap"
#include "statics.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    joyscene = new joystickscene(ui->view_joystick);
    ui->view_joystick->setScene(joyscene);

    usbstatus_changed = false;
    ui->btn_playstop->setEnabled(false);

    ui->btn_recstop->hide();
    ui->btn_playpause->hide();

    _maintimer = new QTimer(this);
    connect(_maintimer, SIGNAL(timeout()), this, SLOT(TimerEvent()));
    this->_maintimer->start(1000);

    pic_cam_10 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam1_0");
    pic_cam_20 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam2_0");
    pic_cam_30 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam3_0");
    pic_cam_40 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam4_0");
    pic_cam_50 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam5_0");
    pic_cam_60 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam6_0");
    pic_cam_11 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam1_1");
    pic_cam_21 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam2_1");
    pic_cam_31 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam3_1");
    pic_cam_41 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam4_1");
    pic_cam_51 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam5_1");
    pic_cam_61 = new QPixmap(":/new/images/Resource/Dcu/dcu_cam6_1");

    pic_connected =  new QPixmap(":/new/images/Resource/Dcu/wific");
    pic_disconnected =  new QPixmap(":/new/images/Resource/Dcu/wifid");

    icon_connected = new QIcon(*pic_connected);
    icon_disconnected = new QIcon(*pic_disconnected);

    icon10 = new QIcon(*pic_cam_10);
    icon20 = new QIcon(*pic_cam_20);
    icon30 = new QIcon(*pic_cam_30);
    icon40 = new QIcon(*pic_cam_40);
    icon50 = new QIcon(*pic_cam_50);
    icon60 = new QIcon(*pic_cam_60);

    icon11 = new QIcon(*pic_cam_11);
    icon21 = new QIcon(*pic_cam_21);
    icon31 = new QIcon(*pic_cam_31);
    icon41 = new QIcon(*pic_cam_41);
    icon51 = new QIcon(*pic_cam_51);
    icon61 = new QIcon(*pic_cam_61);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete joyscene;
}

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y%m%d_%X", &tstruct);

    return buf;
}

void MainWindow::on_btn_recstart_clicked()
{
    QString x = currentDateTime().c_str();
    x = x.replace(".","");
    x = x.replace(":","");
    std::string xx = x.toStdString();
    QString itemm = (xx + ".mp3").c_str();
    std::string item_path = usb_storage_path  + (itemm).toStdString();
    ui->txt_recname->setText(item_path.c_str());
    QString item = ui->txt_recname->toPlainText();
    ui->btn_recstop->show();
    ui->btn_recstart->hide();
    mtgclientrecord->recorde_start(item.toStdString());
}

bool MainWindow::isusbconnected()
{
    QDir directory("/media/");
    QStringList txtFilesAndDirectories = directory.entryList();
    std::string item = "";

    for ( int i =0 ; i < txtFilesAndDirectories.size() ; i++)
    {
        QString a = txtFilesAndDirectories.at(i);
        if ( a.size() > 2)
        {
            item = a.toStdString();
            break;
        }
        //std::cout<< "See : "<<a.toStdString() << std::endl;
    }

    if ( item != "")
    {
        //Check records folder is exist or not , if no create records folder
        std::string filedir = "/media/" + item + "/records/";
        if ( QDir(filedir.c_str()).exists() == false ) {QDir().mkdir(filedir.c_str());};

        usb_storage_path = filedir;
        return true;
    }
    else
    {
        return false;
    }
}

void MainWindow::update_folder_content()
{
    ui->lst_folder_info->clear();
    QDir directory(usb_storage_path.c_str());
    QStringList txtFilesAndDirectories = directory.entryList();
    for ( int i = 0 ; i < txtFilesAndDirectories.size() ; i++)
    {
        QString a = txtFilesAndDirectories.at(i);
        if ( a.size() > 2)
        {
            std::string item = a.toStdString();
            ui->lst_folder_info->addItem(item.c_str());
        }
    }
}

void MainWindow::update_ui()
{
    bool isusbconnected_result = isusbconnected();
    if ( isusbconnected_result )
    {
        ui->img_usbstorage0->hide();
        ui->img_usbstorage1->show();
        if ( usbstatus_changed == false )
        {
            update_folder_content();
            usbstatus_changed = true;
        }
    }
    else
    {
        ui->img_usbstorage1->hide();
        ui->img_usbstorage0->show();
        ui->lst_folder_info->clear();
        usbstatus_changed = false;
    }

    if ( tcpsocket->isconnected )
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/wific.png)  0 0 0 0 100 stretch";
        ui->status->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/wifid.png)  0 0 0 0 100 stretch";
        ui->status->setStyleSheet(a);
    }

    QString item = audio_info.c_str();

    int index = item.indexOf(".",0);
    QString subString = item.mid(0,index);
    ui->txt_info->setText(subString.toStdString().c_str());
}

void MainWindow::TimerEvent()
{
    //std::cout << "Timer expired." << std::endl;
    update_ui();

}

void MainWindow::on_btn_recstop_clicked()
{
    ui->btn_recstop->hide();
    ui->btn_recstart->show();
    mtgclientrecord->recorde_stop();
    usbstatus_changed = false;
}




void MainWindow::on_btn_playstart_clicked()
{
    ui->btn_playstop->setEnabled(true);
    ui->btn_playstart->hide();
    ui->btn_playpause->show();



    QString item = ui->txt_recname->toPlainText();
    mtgclientplay->play_start(item.toStdString());
}

void MainWindow::on_btn_playstop_clicked()
{
    mtgclientplay->play_stop();

    ui->btn_playstart->show();
    ui->btn_playpause->hide();
    ui->btn_playstop->setEnabled(false);
}

void MainWindow::on_pushButton_clicked()
{
    send_buffer = "send";
}

void MainWindow::on_lst_folder_info_itemClicked(QListWidgetItem *item)
{
    std::string item_path = usb_storage_path  + (item->text()).toStdString();

    ui->txt_recname->setText(item_path.c_str());
}

void MainWindow::on_btn_playpause_clicked()
{

}

void MainWindow::on_btn_login_clicked()
{

}

void MainWindow::updatecs()
{
    if ( camera_id == 1)
    {
        ui->cs1->setIcon(*icon11);
        ui->cs2->setIcon(*icon20);
        ui->cs3->setIcon(*icon30);
        ui->cs4->setIcon(*icon40);
        ui->cs5->setIcon(*icon50);
        ui->cs6->setIcon(*icon60);
    }
    if ( camera_id == 2)
    {
        ui->cs1->setIcon(*icon10);
        ui->cs2->setIcon(*icon21);
        ui->cs3->setIcon(*icon30);
        ui->cs4->setIcon(*icon40);
        ui->cs5->setIcon(*icon50);
        ui->cs6->setIcon(*icon60);
    }
    if ( camera_id == 3)
    {
        ui->cs1->setIcon(*icon10);
        ui->cs2->setIcon(*icon20);
        ui->cs3->setIcon(*icon31);
        ui->cs4->setIcon(*icon40);
        ui->cs5->setIcon(*icon50);
        ui->cs6->setIcon(*icon60);
    }
    if ( camera_id == 4)
    {
        ui->cs1->setIcon(*icon10);
        ui->cs2->setIcon(*icon20);
        ui->cs3->setIcon(*icon30);
        ui->cs4->setIcon(*icon41);
        ui->cs5->setIcon(*icon50);
        ui->cs6->setIcon(*icon60);
    }
    if ( camera_id == 5)
    {
        ui->cs1->setIcon(*icon10);
        ui->cs2->setIcon(*icon20);
        ui->cs3->setIcon(*icon30);
        ui->cs4->setIcon(*icon40);
        ui->cs5->setIcon(*icon51);
        ui->cs6->setIcon(*icon60);
    }
    if ( camera_id == 6)
    {
        ui->cs1->setIcon(*icon10);
        ui->cs2->setIcon(*icon20);
        ui->cs3->setIcon(*icon30);
        ui->cs4->setIcon(*icon40);
        ui->cs5->setIcon(*icon50);
        ui->cs6->setIcon(*icon61);
    }


     if ( tcpsocket != 0)
     tcpsocket->set_camera_number(camera_id);

}

void MainWindow::on_cs1_clicked()
{
    camera_id = 1;
    updatecs();

}

void MainWindow::on_cs2_clicked()
{
    camera_id = 2;
    updatecs();
}

void MainWindow::on_cs3_clicked()
{
    camera_id = 3;
    updatecs();
}

void MainWindow::on_cs4_clicked()
{
    camera_id = 4;
    updatecs();
}

void MainWindow::on_cs5_clicked()
{
    camera_id = 5;
    updatecs();
}

void MainWindow::on_cs6_clicked()
{
    camera_id = 6;
    updatecs();
}
