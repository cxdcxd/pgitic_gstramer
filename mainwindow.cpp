#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"
#include "ctime"
#include "time.h"
#include "userlogin.h"
#include "joystickscene.h"
#include "QPixmap"
#include "statics.h"
#include "boost/filesystem.hpp"
#include "QCloseEvent"
#include "QRect"
#include "QDesktopWidget"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    isresize_ui = false;

    dcu_page = false;

    joyscene = new joystickscene(ui->view_joystick);
    ui->view_joystick->setScene(joyscene);

    usbstatus_changed = false;

    ui->btn_recstop->hide();
    ui->btn_playstop->hide();


    speaker_volume_temp = mtlog->speaker_volume;

    _maintimer = new QTimer(this);
    connect(_maintimer, SIGNAL(timeout()), this, SLOT(TimerEvent()));
    this->_maintimer->start(50);

    ui->tabWidget->setCurrentIndex(0);

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

    //add models
    list_camera_models.push_back("CS-CW");
    list_camera_models.push_back("AU-HE");
    list_camera_models.push_back("SC385");
    list_camera_models.push_back("SC385EXT");
    list_camera_models.push_back("CS580");
    list_camera_models.push_back("SONY");
    list_camera_models.push_back("SONYEXT");
    list_camera_models.push_back("BOSCH");

    list_controller_models.push_back("Panasonic");
    list_controller_models.push_back("Bosch-CS900");
    list_controller_models.push_back("Bosch-CCU2");
    list_controller_models.push_back("Bosch-CS1000");

    list_FIFO_MAX.push_back("1");
    list_FIFO_MAX.push_back("2");
    list_FIFO_MAX.push_back("3");
    list_FIFO_MAX.push_back("4");


    slider1_active = false;
    slider2_active = false;
    slider3_active = false;

    audio_info = "0:00:00";

    for ( int i = 1 ; i < 21 ; i++)
    {
        QString x = QString::number(i);
        list_MICNUMBERS.push_back(x.toStdString().c_str());
    }

    list_MICSTATUS.push_back("OFF"); //0
    list_MICSTATUS.push_back("ON");  //1

    for ( int i = 0 ; i < list_camera_models.size() ; i++)
        ui->cmodel->addItem(list_camera_models.at(i).c_str());

    for ( int i = 0 ; i < list_controller_models.size() ; i++)
        ui->smodel->addItem(list_controller_models.at(i).c_str());

    //=========

    for ( int i = 0 ; i < list_FIFO_MAX.size() ; i++)
        ui->cmb_fifo->addItem(list_FIFO_MAX.at(i).c_str());

    for ( int i = 0 ; i < list_MICNUMBERS.size() ; i++)
        ui->cmb_micnumber->addItem(list_MICNUMBERS.at(i).c_str());

    for ( int i = 0 ; i < list_MICSTATUS.size() ; i++)
        ui->cmb_micstatus->addItem(list_MICSTATUS.at(i).c_str());

    ui->rad_fifo->setChecked(true);

    status = "S";
    user_mode = "admin";
    mode = "IDLE";
    input = "";
    camera_id = 1;

    ui->slider4->setValue( mtlog->camera_speed);
    ui->slider4->setSliderPosition(mtlog->camera_speed);
    ui->lbl_slider4->setText(QString::number(mtlog->camera_speed));

    ui->slider5->setValue(mtlog->speaker_volume / 2);
    ui->slider5->setSliderPosition(mtlog->speaker_volume / 2);
    std::string _val = QString::number(mtlog->speaker_volume).toStdString() + "%";
    ui->lbl_slider5->setText(_val.c_str());

    ui->lbl_slider3->setText("-");
    ui->lbl_slider2->setText("-");
    ui->lbl_slider1->setText("-");

    camera_loop_mode = false;
    camera_stop_dir = false;
    camera_stop_focus = false;
    camera_stop_zoom = false;

    timer_tick_counter = 0;

    bar_info = "Ready";
    bar_show_counter = 0;

    mic_number = "00";
    cam_number = "00";
    total_number = "00";

    updatecs();

    for ( int i = 0 ; i < 5 ; i++)
    {
        chart_numbers[i] = 0;
    }

    for ( int i = 0 ; i < 5 ; i++ )
    {
        chart_rates[i] = 0;
    }

    for ( int i = 0 ; i < 5 ; i++)
    {
        chart_names[i] = "";
    }

    chart_mode = 0;
    chart_max = 0;
    update_chart();
    update_table();

    //NOTE: add this in code not ui
    //   for ( int i = 0 ; i < list_camera_models.size() ; i++)
    //   {
    //      std::string _item = list_camera_models.at(i);
    //      QString item = _item.c_str();
    //      ui->cmodel->insertItem(0,"1");
    //   }
    //   for ( int j = 0 ; j < list_controller_models.size() ; j++)
    //      ui->smodel->addItem(list_controller_models.at(j).c_str());

    tab_update("main");

    if ( tcpsocket )
      tcpsocket->set_camera_mode(false);

    init_done = true;

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

int old_serials = 0;

void MainWindow::update_serial_ports()
{

    QDir directory("/dev/","tty*",QDir::Name,QDir::System);
    QStringList txtFilesAndDirectories = directory.entryList();

    int serial_detected = txtFilesAndDirectories.size();
    std::cout<<serial_detected<<std::endl;

    if ( serial_detected != old_serials )
    {
        ui->cmb_serial1->clear();
        ui->cmb_serial2->clear();


        for ( int i = 0 ; i < serial_detected ; i++ )
        {
            QString a = txtFilesAndDirectories.at(i);
            std::cout<<a.toStdString()<<std::endl;


            ui->cmb_serial1->addItem(a);
            ui->cmb_serial2->addItem(a);


        }

        old_serials = serial_detected;

    }

}

bool MainWindow::isusbconnected()
{
    QDir directory("/media/");
    QStringList txtFilesAndDirectories = directory.entryList();
    std::string itemv = "";
    bool valid = false;

    for ( int i =0 ; i < txtFilesAndDirectories.size() ; i++)
    {
        QString a = txtFilesAndDirectories.at(i);
        if ( a.size() > 2)
        {
            itemv = a.toStdString();
            valid = true;
            break;
        }

    }


    if ( valid )
    {
        std::string filedir2 = "/media/" + itemv;
       // std::cout<<filedir2<<std::endl;

        if ( QDir(filedir2.c_str()).exists())
        {
            //Check records folder is exist or not , if no create records folder
            std::string filedir = "/media/" + itemv + "/records/";
            if ( QDir(filedir.c_str()).exists() == false ) {QDir().mkdir(filedir.c_str());};

            usb_storage_path = filedir;

           // std::cout<<usb_storage_path<<std::endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
         return false;
    }

}


void MainWindow::resize_ui()
{
    QRect rec = QApplication::desktop()->screenGeometry();
    int w = rec.width() - 40;
    int h = rec.height();
    int offset = ui->tabWidget->geometry().x();

    ui->tabWidget->setGeometry(ui->tabWidget->geometry().x(),ui->tabWidget->geometry().y(),w,ui->tabWidget->geometry().height());
    ui->tabWidget_2->setGeometry(ui->tabWidget_2->geometry().x(),ui->tabWidget_2->geometry().y(),w-20,ui->tabWidget_2->geometry().height());



    ui->mid_1->setGeometry(  (w / 2) - (ui->mid_1->geometry().width() / 2) ,ui->mid_1->geometry().y(),ui->mid_1->geometry().width(),ui->mid_1->geometry().height());
    ui->mid_2->setGeometry(  (w / 2) - (ui->mid_2->geometry().width() / 2) ,ui->mid_2->geometry().y(),ui->mid_2->geometry().width(),ui->mid_2->geometry().height());
    ui->mid_3->setGeometry(  (w / 2) - ((w-20) / 2) ,ui->mid_3->geometry().y(),w - 20,ui->mid_3->geometry().height());
    ui->mid_4->setGeometry(  (w / 2) - (ui->mid_4->geometry().width() / 2) ,ui->mid_4->geometry().y(),ui->mid_4->geometry().width(),ui->mid_4->geometry().height());
    ui->mid_5->setGeometry(  (w / 2) - (ui->mid_5->geometry().width() / 2) ,ui->mid_5->geometry().y(),ui->mid_5->geometry().width(),ui->mid_5->geometry().height());
    ui->mid_6->setGeometry(  (w / 2) - (ui->mid_6->geometry().width() / 2) ,ui->mid_6->geometry().y(),ui->mid_6->geometry().width(),ui->mid_6->geometry().height());
    ui->mid_7->setGeometry(  (w / 2) - (ui->mid_7->geometry().width() / 2) ,ui->mid_7->geometry().y(),ui->mid_7->geometry().width(),ui->mid_7->geometry().height());
    ui->mid_11->setGeometry( -10 + (w / 2) - (ui->mid_11->geometry().width() / 2) ,ui->mid_11->geometry().y(),ui->mid_11->geometry().width(),ui->mid_11->geometry().height());

    ui->mid_13->setGeometry( -10 + (w / 2) - (ui->mid_13->geometry().width() / 2) ,ui->mid_13->geometry().y(),ui->mid_13->geometry().width(),ui->mid_13->geometry().height());
    ui->mid_14->setGeometry( -10 + (w / 2) - (ui->mid_14->geometry().width() / 2) ,ui->mid_14->geometry().y(),ui->mid_14->geometry().width(),ui->mid_14->geometry().height());

    ui->groupBox_5->setGeometry(-5 + (w / 2) - (ui->groupBox_5->geometry().width() / 2) ,ui->groupBox_5->geometry().y(),ui->groupBox_5->geometry().width(),ui->groupBox_5->geometry().height());
    ui->tabWidget_4->setGeometry(  (w / 2) - (ui->tabWidget_4->geometry().width() / 2) ,ui->tabWidget_4->geometry().y(),ui->tabWidget_4->geometry().width(),ui->tabWidget_4->geometry().height());
    //ui->mid_8->setGeometry( (w / 2) - (ui->mid_8->geometry().width() / 2) ,ui->mid_8->geometry().y(),ui->mid_8->geometry().width(),ui->mid_8->geometry().height());
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
        isusbconnected_bool = true;
        //ui->img_usbstorage0->hide();
        //ui->img_usbstorage1->show();
        if ( usbstatus_changed == false )
        {
            update_folder_content();
            usbstatus_changed = true;
        }


    }
    else
    {
         isusbconnected_bool = false;
        //ui->img_usbstorage1->hide();
        //ui->img_usbstorage0->show();
        ui->lst_folder_info->clear();
        usbstatus_changed = false;
    }

    if ( tcpsocket->isconnected )
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/wific.png)  0 0 0 0 100 stretch";
        ui->status->setStyleSheet(a);
        ui->monitor_dcu->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/wifid.png)  0 0 0 0 100 stretch";
        ui->status->setStyleSheet(a);
        ui->monitor_dcu->setStyleSheet(a);
    }

    if ( mtserial->active)
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/serialc.png)  0 0 0 0 100 stretch";
        ui->monitor_serial->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/Dcu/seriald.png)  0 0 0 0 100 stretch";
        ui->monitor_serial->setStyleSheet(a);
    }

//    if ( mtserial2->active)
//    {
//        QString a = "border-image:  url(:/new/images/Resource/Dcu/serialc.png)  0 0 0 0 100 stretch";
//        ui->monitor_serial2->setStyleSheet(a);
//    }
//    else
//    {
//        QString a = "border-image:  url(:/new/images/Resource/Dcu/seriald.png)  0 0 0 0 100 stretch";
//        ui->monitor_serial2->setStyleSheet(a);
//    }

    if ( isusbconnected_bool )
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/storage1.png)  0 0 0 0 100 stretch";
        ui->img_usbstorage0->setStyleSheet(a);
        ui->monitor_usb->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/storage0.png)  0 0 0 0 100 stretch";
        ui->img_usbstorage0->setStyleSheet(a);
        ui->monitor_usb->setStyleSheet(a);
    }

    if ( _lic1 )
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/ok.png)  0 0 0 0 100 stretch";
        ui->img_lic1->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/error.png)  0 0 0 0 100 stretch";
        ui->img_lic1->setStyleSheet(a);
    }

    if ( _lic2 )
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/ok.png)  0 0 0 0 100 stretch";
        ui->img_lic2->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/error.png)  0 0 0 0 100 stretch";
        ui->img_lic2->setStyleSheet(a);
    }

    if ( _lic3 )
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/ok.png)  0 0 0 0 100 stretch";
        ui->img_lic3->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/error.png)  0 0 0 0 100 stretch";
        ui->img_lic3->setStyleSheet(a);
    }

    if ( _lic4 )
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/ok.png)  0 0 0 0 100 stretch";
        ui->img_lic4->setStyleSheet(a);
    }
    else
    {
        QString a = "border-image:  url(:/new/images/Resource/nico/error.png)  0 0 0 0 100 stretch";
        ui->img_lic4->setStyleSheet(a);
    }

    if ( mtgclientrecord->active)
    {
        ui->monitor_recording->setText("YES");
    }
    else
    {
        ui->monitor_recording->setText("NO");
    }

    QString item = audio_info.c_str();

    int index = item.indexOf(".",0);
    QString subString = item.mid(0,index);
    subString = "0" + subString;
    ui->lbl_info->setText(subString.toStdString().c_str());


    ui->txt_mode->setText(mode.c_str());
    ui->txt_input->setText(input.c_str());

    ui->txt_bar_info->setText(bar_info.c_str());

    ui->txt_micnum->setText(mic_number.c_str());
    ui->txt_camnum->setText(cam_number.c_str());
    ui->txt_totalnum->setText(total_number.c_str());

    ui->txt_Mmicnum->setText(mic_number.c_str());
    ui->txt_Mcamnum->setText(cam_number.c_str());
    ui->txt_Mtotalnum->setText(total_number.c_str());

    ui->lst_clients->clear();

    for ( int i = 0 ; i < list_tcpclientslist.size() ; i++)
    {
        ui->lst_clients->addItem(list_tcpclientslist.at(i).c_str());
    }

    QFileInfo info("/home/pi/database/data.db");
    long size = info.size() / 1000;
    QString _size = QString::number(size) + "Kb";
    ui->lbl_db_size->setText(_size);

    boost::filesystem3::space_info si = boost::filesystem3::space(".");
    long _free = si.free / 1000000;
    long _all = si.capacity / 1000000;
    QString free = QString::number(_free) + "Mb";
    QString all = QString::number(_all) + "Mb";

    ui->lbl_freespace->setText(free);
    ui->lbl_storage->setText(all);

    ui->lbl_camera_model->setText(mtlog->camera_model.c_str());
    ui->lbl_controller_model->setText(mtlog->controller_model.c_str());

    ui->lbl_HID->setText(HID.c_str());


    ui->lbl_cameraspeed->setText(QString::number(mtlog->camera_speed));
    ui->lbl_volume->setText(QString::number(mtlog->speaker_volume));

    if ( audio_max_seconds != 0)
    {
        gint64 a = ((gdouble)(audio_current_second) / (audio_max_seconds)) * 100;
        ui->progress_audio->setValue(a);
    }
    else
    {
        ui->progress_audio->setValue(0);
    }

     update_serial_ports();

}

int update_counter;


void MainWindow::TimerEvent()
{
    timer_tick_counter++;


    if ( timer_tick_counter > 6)
    {
        timer_tick_counter=0;
        update_ui();

        if ( isresize_ui == false )
        {
            isresize_ui = true;
            resize_ui();
        }
    }

    //ignore user clicks
    if ( !slider1_active )
    {
    ui->slider1->setSliderPosition(15);
    ui->slider1->setValue(15);
    }

    if ( !slider2_active )
    {
    ui->slider2->setSliderPosition(15);
    ui->slider2->setValue(15);
    }

    if ( !slider3_active )
    {
    ui->slider3->setSliderPosition(15);
    ui->slider3->setValue(15);
    }

    if ( bar_info != "Ready")
    {
        bar_show_counter++;
        if ( bar_show_counter > 20)
        {
            bar_show_counter =0;
            bar_info = "Ready";
        }
    }

    //======================================== camera_loop 100ms
    sended = false;
    camera_send_tick++;

    if (camera_stop_dir)
    {
        camera_stop_dir = false;
        sended = true;
        tcpsocket->stop_cam();
    }
    else
        if (camera_stop_focus)
        {
            camera_stop_focus = false;
            sended = true;
            tcpsocket->stop_focus();
        }
        else
            if (camera_stop_iris)
            {
                camera_stop_iris = false;
                sended = true;
                tcpsocket->stop_iris();
            }
            else
                if (camera_stop_zoom)
                {
                    camera_stop_zoom = false;
                    sended = true;
                    tcpsocket->stop_zoom();
                }

    //=================================
    if (mtlog->cmd_loop)
    {
        if (camera_send_tick >= (mtlog->loop_value / 50)) //250ms default
        {
            camera_send_tick = 0;

            if (camera_stop_zoom == false && camera_stop_focus == false && camera_stop_iris == false && camera_stop_dir == false)
            {
                if (camera_loop_mode)
                {
                    if (sended == false)
                    {
                        QByteArray array = last_command.c_str();
                        tcpsocket->mainwrite(array,array.size());

                    }

                }
            }
        }
    }
    else
    {
        if (camera_send_tick >= 2) //100ms
        {
            camera_send_tick = 0;

            if (camera_stop_zoom == false && camera_stop_focus == false && camera_stop_iris == false && camera_stop_dir == false)
            {
                if (camera_loop_mode)
                {

                    if (sended == false)
                    {
                        if (temp_command != last_command)
                        {
                            temp_command = last_command;

                            QByteArray array = last_command.c_str();
                            tcpsocket->mainwrite(array,array.size());

                        }
                    }
                }
            }
        }
    }
}


void MainWindow::on_btn_recstop_clicked()
{
    ui->btn_recstop->hide();
    ui->btn_recstart->show();
    mtgclientrecord->recorde_stop();
    usbstatus_changed = false;
     audio_info = "0:00:00";
}

void MainWindow::on_btn_playstart_clicked()
{
    ui->btn_playstop->show();
    ui->btn_playstart->hide();
    QString item = ui->txt_recname->toPlainText();
    mtgclientplay->play_start(item.toStdString());
}

void MainWindow::on_btn_playstop_clicked()
{
    mtgclientplay->play_stop();

    ui->btn_playstart->show();
    ui->btn_playstop->hide();

    audio_info = "0:00:00";
}

void MainWindow::on_lst_folder_info_itemClicked(QListWidgetItem *item)
{
    std::string item_path = usb_storage_path  + (item->text()).toStdString();

    ui->txt_recname->setText(item_path.c_str());
}



void MainWindow::on_btn_login_clicked()
{
   QString a = ui->txt_username->text().trimmed();
   QString b = ui->txt_password->text().trimmed();

   if ( a == "" ) { bar_info = "please fill all blanks"; return; }
   if ( b == "" ) { bar_info = "please fill all blanks"; return; }

   if ( a.toStdString() == "admin" && b.toStdString() == mtlog->admin_pass )
   {
       ui->frm_lock->hide();
       ui->txt_username->setText("");
       ui->txt_password->setText("");
       tcpsocket->set_camera_mode(true);

       if ( ui->chm_remember->isChecked() )
       {
          mtlog->rememberme = true;
       }
       else
       {
           mtlog->rememberme = false;
       }

       ui->chm_remember->setChecked(false);

       mtlog->save_config();
   }
   else
   {
      bar_info = "Invalid Username or Password";
   }

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

void MainWindow::on_s1_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "1";
    }
    update_ui();
}

void MainWindow::on_s2_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "2";
    }
    update_ui();
}

void MainWindow::on_s3_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "3";
    }
    update_ui();
}

void MainWindow::closeEvent(QCloseEvent * event)
{
   event->ignore();
}

void MainWindow::on_s4_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "4";
    }
    update_ui();
}

void MainWindow::on_s5_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "5";
    }
    update_ui();
}

void MainWindow::on_s6_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "6";
    }
    update_ui();
}

void MainWindow::on_s7_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "7";
    }
    update_ui();
}

void MainWindow::on_s8_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "8";
    }
    update_ui();
}

void MainWindow::on_s9_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "9";
    }
    update_ui();
}

void MainWindow::on_sclear_clicked()
{
    if (user_mode != "admin") return;
    if ( input == "255 " ) return;
    if ( mode == "APRESET" ) return;

    input = "";
    update_ui();

}

void MainWindow::on_s0_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() < 2)
    {
        input += "0";
    }
    update_ui();
}

void MainWindow::on_sback_clicked()
{
    if (user_mode != "admin") return;
    if ( input.size() == 2)
    {
        input = input.substr(0,1);
    }
    else if ( input.size() == 1)
    {
        input = "";
    }
    update_ui();
}

void MainWindow::on_soff_clicked()
{
    input = "";
    mode = "IDLE";
    update_ui();
}

void MainWindow::on_sok_clicked()
{
    if (user_mode != "admin") return;

    if ( mtserial->active == false)
    {
        mode = "IDLE";
        input = "";
        show_message("Please Check your dcu serial connection");
        return;
    }

    if (mode == "IDLE" || input == "" || input == "00")
    {
        input = "";
        mode = "IDLE";
        show_message("please selecet a valid command");
        return;
    }

    if (mode == "APRESET")
    {
        if (input != "00" && input != "")
        {
            QString x = input.c_str();
            tcpsocket->set_point(x.toInt());
            show_message("Send done...");
        }
        else
        {
            show_message("There is't any active microphone");
        }

    }
    else
        if (mode == "MPRESET")
        {
            QString x = input.c_str();
            tcpsocket->set_point(x.toInt());
            show_message("Send done...");
        }
        else if (mode == "MIC")
        {
            QString x = input.c_str();
            tcpsocket->call_point(x.toInt());
            show_message("Send done...");
        }
        else if (mode == "HOME")
        {
            tcpsocket->call_home();
            show_message("Send done...");
        }
        else if (mode == "SHOME")
        {
            tcpsocket->set_home();
            show_message("Send done...");
        }

    mode = "IDLE";
    input = "";
    update_ui();
}

void MainWindow::on_sshome_clicked()
{
    if (user_mode != "admin") return;
    input = "255";
    mode = "SHOME";
    update_ui();
}

void MainWindow::on_shome_clicked()
{
    if (user_mode != "admin") return;
    input = "255";
    mode = "HOME";
    update_ui();
}

void MainWindow::on_ssmic_clicked()
{
    if (user_mode != "admin") return;
    input = "";
    mode = "MIC";
    update_ui();
}

void MainWindow::on_sapreset_clicked()
{
    if (user_mode != "admin") return;
    input = mic_number;
    mode = "APRESET";
    update_ui();
}

void MainWindow::on_smpreset_clicked()
{
    if (user_mode != "admin") return;
    input = "";
    mode = "MPRESET";
    update_ui();
}

void MainWindow::on_d1_clicked()
{
    //dummy
}

void MainWindow::on_d2_clicked()
{
    //dummy
}

void MainWindow::on_d3_clicked()
{
    //dummy
}

void MainWindow::on_d4_clicked()
{
    //dummy
}

void MainWindow::on_d5_clicked()
{
    //dummy
}

void MainWindow::on_d6_clicked()
{
    //dummy
}

void MainWindow::on_d7_clicked()
{
    //dummy
}

void MainWindow::on_d8_clicked()
{
    //dummy
}

void MainWindow::on_cmodel_textChanged(const QString &arg1)
{
    //dummy
}

void MainWindow::on_smodel_textChanged(const QString &arg1)
{
    //dummy
}

void MainWindow::on_cmodel_currentIndexChanged(const QString &arg1)
{
    if (user_mode != "admin") return;
    mtlog->camera_model = arg1.toStdString();
    tcpsocket->set_camera_model(arg1.toStdString());
    mtlog->save_config();
}

void MainWindow::on_smodel_currentIndexChanged(const QString &arg1)
{
    if (user_mode != "admin") return;
    mtlog->controller_model = arg1.toStdString();
    tcpsocket->set_controller_model(arg1.toStdString());
    mtlog->save_config();
}

void MainWindow::on_d1_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d2_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d3_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d4_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d5_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d6_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d7_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::on_d8_released()
{
    if (user_mode != "admin") return;
    tcpsocket->set_camera_dir(0);
    camera_stop_dir = true;
    camera_loop_mode = false;
}

void MainWindow::show_message(QString msg)
{
    //QMessageBox msgBox;
    //msgBox.setText(msg);
    //msgBox.exec();

    bar_info = msg.toStdString();
}

void MainWindow::on_slider1_sliderReleased()
{
    slider1_active = false;
    //ui->slider1->resetInputContext();
    ui->slider1->setValue(15);
    ui->slider1->setSliderPosition(15);
     ui->lbl_slider1->setText("-");
    camera_stop_zoom = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":ZS." + _num2 + ")";

}

void MainWindow::on_slider2_sliderReleased()
{
    slider2_active = false;
    ui->slider2->setValue(15);
    ui->slider2->setSliderPosition(15);
     ui->lbl_slider2->setText("-");
    camera_stop_focus = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":FS." + _num2 + ")";

}

void MainWindow::on_slider3_sliderReleased()
{
    slider3_active = false;
    ui->slider3->setValue(15);
    ui->slider3->setSliderPosition(15);
     ui->lbl_slider3->setText("-");
    camera_stop_iris = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":IS." + _num2 + ")";
}

void MainWindow::on_slider4_sliderReleased()
{
   mtlog->save_config();
}

void MainWindow::on_slider1_valueChanged(int value)
{

}

void MainWindow::on_slider2_valueChanged(int value)
{

}

void MainWindow::on_slider3_valueChanged(int value)
{

}

void MainWindow::on_slider4_valueChanged(int value)
{
    if ( init_done )
    {
    //value = (0.26666666) * value; //1-8
    mtlog->camera_speed = value;
    ui->lbl_slider4->setText(QString::number(mtlog->camera_speed));
    //mtlog->save_config();
    }
}

void MainWindow::on_d1_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(1);
}

void MainWindow::on_d2_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(2);
}

void MainWindow::on_d3_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(3);
}

void MainWindow::on_d4_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(4);
}

void MainWindow::on_d5_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(5);
}

void MainWindow::on_d6_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(6);
}

void MainWindow::on_d7_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(7);
}

void MainWindow::on_d8_pressed()
{
    if (user_mode != "admin") return;
    camera_loop_mode = true;
    tcpsocket->set_camera_dir(8);
}

void MainWindow::on_btn_save_clicked()
{
 mtlog->remote_ip = ui->txt_ip->toPlainText().toStdString().c_str();
 mtlog->remote_port = ui->txt_port->toPlainText().toStdString().c_str();
 mtlog->cmd_loop = ui->chm_loop->isChecked();
 mtlog->joyx = ui->chm_joyx->isChecked();
 mtlog->joyy = ui->chm_joyy->isChecked();
 //mtlog->logout_idle = ui->chm_logout->isChecked();
 mtlog->loop_value = ui->txt_loop_value->toPlainText().toInt();
 mtlog->camera_model = ui->cmodel->currentText().toStdString();
 mtlog->controller_model = ui->smodel->currentText().toStdString();


  bool r = mtlog->save_config();
  if ( r )
  {
      bar_info = "Config Saved !";
  }
  else
  {
      bar_info = "Failed";
  }
}

void MainWindow::on_btn_change_admin_clicked()
{
 //change admin password
   std::string pass = ui->txt_admin_pass->text().toStdString();
   std::string newp = ui->txt_admin_new->text().toStdString();
   std::string confirmp = ui->txt_admin_confirm->text().toStdString();

   if ( pass == ""  )
   {
       bar_info = "Please all blanks";
       return;
   }

   if ( newp == ""  )
   {
       bar_info = "Please fill all blanks";
       return;
   }

   if ( confirmp == ""  )
   {
       bar_info = "Please fill all blanks";
       return;
   }

   if ( pass == mtlog->admin_pass || pass == mtlog->superuser_pass)
   {
       if ( newp == confirmp)
       {
          bar_info = "Admin password changed";
          mtlog->admin_pass = newp;
          mtlog->save_config();

          ui->txt_admin_pass->setText("");
          ui->txt_admin_new->setText("");
          ui->txt_admin_confirm->setText("");
       }
       else
       {
           bar_info = "Confirm mismatched";
           return;
       }
   }
   else
   {
       bar_info = "Invalid password for admin";
       return;
   }
}



void MainWindow::on_btn_refresh_clicked()
{
    ui->lst_log->clear();

    std::string msg;
    std::string _sender = ui->txt_log_sender->toPlainText().toStdString();
    std::string _type = ui->cmb_log_type->currentText().toStdString();

    QDateTime _from = ui->dt_from->dateTime();
    QDateTime _to = ui->dt_to->dateTime();

    QString date_1 = _from.toString("yyyy-MM-dd HH:mm:ss");
    QString date_2 = _to.toString("yyyy-MM-dd HH:mm:ss");

    bool c1 = ui->chk_1->isChecked();

    std::string table_name;

    if (ui->rad_soft->isChecked())
    table_name = "log";

    if ( ui->rad_hard->isChecked())
    table_name = "hardlog";

    if ( c1 == false )
    {
            if ( _sender != "")
            {
                msg = "SELECT * FROM " + table_name + " Where sender ='" + _sender + "' and type ='" + _type + "'";
            }
            else
            {
                msg = "SELECT * FROM " + table_name + " Where type ='" + _type + "'";
            }
    }
    else
    {
        if ( _sender != "")
        {
            msg = "SELECT * FROM " + table_name + " Where sender ='" + _sender + "' and type ='" + _type + "' and timestamp BETWEEN '" + date_1.toStdString() + "' AND '" + date_2.toStdString() + "'" ;
        }
        else
        {
            msg = "SELECT * FROM " + table_name + " Where type ='" + _type + "' and timestamp BETWEEN '" + date_1.toStdString() + "' AND '" + date_2.toStdString() + "'" ;
        }
    }

     if ( ui->rad_soft->isChecked() )
     {
        std::vector<std::string> data = mtlog->get_log_query(msg);

        QString _WARN = "(WARN)";
        QString _INFO = "(INFO)";
        QString _ERROR = "(ERROR)";
        QString _DEBUG = "(DEBUG)";

        for ( int i = 0 ; i < data.size() ; i++)
        {
            QListWidgetItem *itemc = new QListWidgetItem("");
            QString item = data.at(i).c_str();
            itemc->setBackground(Qt::black);

            if ( item.contains(_DEBUG))
            itemc->setForeground(Qt::green);
            if ( item.contains(_WARN))
            itemc->setForeground(Qt::yellow);
            if ( item.contains(_ERROR))
            itemc->setForeground(Qt::red);
            if ( item.contains(_INFO) )
            itemc->setForeground(Qt::white);
            itemc->setText(item);
            ui->lst_log->addItem(itemc);
        }
     }



    if ( ui->rad_hard->isChecked())
    {
       std::vector<std::string> data = mtlog->get_hard_log_query(msg);


        QString _WARN = "(WARN)";
        QString _INFO = "(INFO)";
        QString _ERROR = "(ERROR)";
        QString _DEBUG = "(DEBUG)";

        for ( int i = 0 ; i < data.size() ; i++)
        {
            QListWidgetItem *itemc = new QListWidgetItem("");
            QString item = data.at(i).c_str();
            itemc->setBackground(Qt::black);

            if ( item.contains(_DEBUG))
            itemc->setForeground(Qt::green);
            if ( item.contains(_WARN))
            itemc->setForeground(Qt::yellow);
            if ( item.contains(_ERROR))
            itemc->setForeground(Qt::red);
            if ( item.contains(_INFO) )
            itemc->setForeground(Qt::white);
            itemc->setText(item);
            ui->lst_log->addItem(itemc);
        }
    }
}

void MainWindow::tab_update(const QString &arg1)
{
    ui->txt_ip->setText( mtlog->remote_ip.c_str());
    ui->txt_port->setText(mtlog->remote_port.c_str());
    ui->txt_loop_value->setText(QString::number(mtlog->loop_value));
    ui->chm_joyx->setChecked(mtlog->joyx);
    ui->chm_joyy->setChecked(mtlog->joyy);
    ui->txt_baudrate1->setText(QString::number(mtlog->serial1_baud));
    ui->txt_baudrate2->setText(QString::number(mtlog->serial2_baud));
    ui->txt_serial_name1->setPlainText(mtlog->serial1_name.c_str());
    ui->txt_serial_name2->setPlainText(mtlog->serial2_name.c_str());
    ui->chm_loop->setChecked(mtlog->cmd_loop);


    QString camera_model = mtlog->camera_model.c_str();
    QString controller_model = mtlog->controller_model.c_str();

    if ( arg1 == "Recording and Playback")
    {
        if ( _lic1)
        {
            ui->liclock_1->hide();
        }
        else
        {
            ui->liclock_1->show();
        }
    }

    if ( arg1 == "Camera Control DCU" )
    {

        if (_lic3)
        {
            ui->liclock_2->hide();

            //std::cout<<mtlog->rememberme<<std::endl;

            if ( mtlog->rememberme )
            {
                ui->frm_lock->hide();
                ui->txt_username->setText("");
                ui->txt_password->setText("");
                if ( tcpsocket )
                tcpsocket->set_camera_mode(true);
                //std::cout<<"ok"<<std::endl;
            }
        }
        else
        {
            ui->liclock_2->show();
        }
    }
    else
    {
        if ( _lic3 )
        {
            if ( tcpsocket )
              tcpsocket->set_camera_mode(false);
        }
    }

    if ( arg1 == "Michrophones")
    {
        if ( _lic2)
        {
            ui->liclock_3->hide();
        }
        else
        {
            ui->liclock_3->show();
        }
    }

    if ( arg1 == "Voting System")
    {
        if (_lic4)
        {
            ui->liclock_4->hide();
        }
        else
        {
            ui->liclock_4->show();
        }
    }

    int index = -1;
    for ( int i = 0 ; i < list_camera_models.size() ; i++)
        if ( camera_model.toStdString() == list_camera_models.at(i)) {index = i; break;}

    if ( index != -1)
    ui->cmodel->setCurrentIndex(index);

    index = -1;
    for ( int i = 0 ; i < list_controller_models.size() ; i++)
        if ( controller_model.toStdString() == list_controller_models.at(i)) {index = i; break;}

    if ( index != -1)
    ui->smodel->setCurrentIndex(index);
}

void MainWindow::on_tabWidget_selected(const QString &arg1)
{
    tab_update(arg1);
}

void MainWindow::on_btn_logout_clicked()
{
    ui->frm_lock->show();
    bar_info = "Logged Out ! ";
    tcpsocket->set_camera_mode(false);

    mtlog->rememberme = false;
    ui->chm_remember->setChecked(false);
    mtlog->save_config();
}

void MainWindow::on_btn_mic_set_clicked()
{
    std::string cmd;
    cmd = "(MODE,";

    if ( ui->rad_fifo->isChecked())
    {
       cmd.append("F;");
       int index = ui->cmb_fifo->currentIndex();
       if ( index == 0 )
       cmd.append("1:");
       if ( index == 1 )
       cmd.append("2:");
       if ( index == 2 )
       cmd.append("3:");
       if ( index == 3 )
       cmd.append("4:");

       cmd.append("0.0)");

    }
    if ( ui->rad_boss->isChecked())
    {
       cmd.append("R;");
       cmd.append("0:0.0)");

    }
    if ( ui->rad_manual->isChecked())
    {
       cmd.append("M;");
       cmd.append("0:0.0)");
    }

    mtserial->send(cmd);

}

void MainWindow::on_btn_manual_set_clicked()
{
    std::string cmd;
    cmd = "(FORCE,";

    int index = ui->cmb_micnumber->currentIndex();
    if ( index == -1 ) {bar_info ="Select a mic number"; return;}
    index++;

    cmd.append(QString::number(index).toStdString().c_str());
    cmd.append(";");

    index = ui->cmb_micstatus->currentIndex();
    if ( index == -1 ) {bar_info ="Select the mic status";return;}

    cmd.append(QString::number(index).toStdString().c_str());
    cmd.append(":");
    cmd.append("0.0)");

    mtserial->send(cmd);


}

void MainWindow::on_btn_log_delete_clicked()
{
    ui->lst_log->clear();

    if ( ui->rad_soft->isChecked() )
    mtlog->deletealllogs();

    if ( ui->rad_hard->isChecked() )
    mtlog->deleteallhardlogs();


}

void MainWindow::on_btn_refresh_all_clicked()
{
    ui->lst_log->clear();

    if ( ui->rad_soft->isChecked() )
    {
        std::vector<std::string> data = mtlog->get_log();

        for ( int i = 0 ; i < data.size() ; i++)
        {
            QString item = data.at(i).c_str();
            ui->lst_log->addItem(item);
        }
    }

    if ( ui->rad_hard->isChecked())
    {
        std::vector<std::string> data = mtlog->get_hard_log();

        for ( int i = 0 ; i < data.size() ; i++)
        {
            QString item = data.at(i).c_str();
            ui->lst_log->addItem(item);
        }
    }
}

void MainWindow::on_btn_today_clicked()
{
   QDateTime _time = QDateTime::currentDateTime();
   ui->dt_from->setDateTime(_time);

}



void MainWindow::update_table()
{
   ui->table_result->setColumnCount(3);
   ui->table_result->setRowCount(chart_max);
   ui->table_result->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   QStringList header;
   header <<"Name"<<"Quantity"<<"Rate";
   ui->table_result->setHorizontalHeaderLabels(header);
   ui->table_result->setEditTriggers(QAbstractItemView::NoEditTriggers);
   for ( int i = 0 ; i < chart_max ; i++)
   {
      QTableWidgetItem* x1 = new QTableWidgetItem(chart_names[i].c_str());
      QTableWidgetItem* x2 = new QTableWidgetItem(QString::number(chart_numbers[i]));
      QTableWidgetItem* x3 = new QTableWidgetItem(QString::number((int)chart_rates[i]) + " %");

      x1->setTextAlignment(Qt::AlignCenter);
      x2->setTextAlignment(Qt::AlignCenter);
      x3->setTextAlignment(Qt::AlignCenter);

      ui->table_result->setItem(i,0,x1);
      ui->table_result->setItem(i,1,x2);
      ui->table_result->setItem(i,2,x3);
   }

}

void MainWindow::update_chart()
{
   int total = 0;
   int max_number = 0;

   for ( int i = 0 ; i < chart_max ; i++)
   {
       total += chart_numbers[i];
       if ( chart_numbers[i] > max_number )
       {
           max_number = chart_numbers[i];
       }

       if ( i == 0) ui->lbl_lable1->setText(chart_names[i].c_str());
       if ( i == 1) ui->lbl_lable2->setText(chart_names[i].c_str());
       if ( i == 2) ui->lbl_lable3->setText(chart_names[i].c_str());
       if ( i == 3) ui->lbl_lable4->setText(chart_names[i].c_str());
       if ( i == 4) ui->lbl_lable5->setText(chart_names[i].c_str());

   }

   for ( int k = 0 ; k < chart_max ; k++)
   {
       if ( total != 0 )
       chart_rates[k] = ( ((float)chart_numbers[k]) / total ) * 100;
       else
       chart_rates[k] = 0;
   }

   //================================================================ SUM = 100 in rate
   if ( total != 0 )
   {
   int total_rate = 0;
   for ( int l = 0 ; l < chart_max ; l++)
   {
       total_rate += chart_rates[l];
   }
   total_rate = 100 - total_rate;
   chart_rates[0] = chart_rates[0] + total_rate;
   }
   //================================================================
   //show rates

   for ( int m = 0 ; m < 5 ; m++)
   {
        int chart_val = 0;
        int x = 0;
        int label_val = 0;
        QString info;

       if ( chart_mode == 1)
       {
           ui->rate_box->setMaxValue(100);
           x = chart_rates[m];
           chart_val = 450 - (x * 420 / 100);
           label_val = chart_val - 20;
           info = QString::number(x) + "%";
       }
       if ( chart_mode == 0)
       {

           if ( max_number != 0)
           ui->rate_box->setMaxValue(max_number);
           else
           ui->rate_box->setMaxValue(100);
           x = chart_numbers[m];
           if ( max_number != 0)
           {
           chart_val = 450 - (x * 420 / max_number);
           label_val = chart_val - 20;
           }
           else
           {
           chart_val = 450;
           label_val = chart_val - 20;
           }
           info = QString::number(x) ;
       }

       if ( m == 0)
       {
       int x1 = ui->chart_1->geometry().left();
       int x2 = ui->lbl_chart_1->geometry().left();
       ui->chart_1->move(x1,chart_val);
       ui->lbl_chart_1->move(x2,label_val);
       ui->lbl_chart_1->setText(info);
       }
       if ( m == 1)
       {
       int x1 = ui->chart_2->geometry().left();
       int x2 = ui->lbl_chart_2->geometry().left();
       ui->chart_2->move(x1,chart_val);
       ui->lbl_chart_2->move(x2,label_val);
       ui->lbl_chart_2->setText(info);
       }
       if ( m == 2)
       {
       int x1 = ui->chart_3->geometry().left();
       int x2 = ui->lbl_chart_3->geometry().left();
       ui->chart_3->move(x1,chart_val);
       ui->lbl_chart_3->move(x2,label_val);
       ui->lbl_chart_3->setText(info);
       }
       if ( m == 3)
       {
       int x1 = ui->chart_4->geometry().left();
       int x2 = ui->lbl_chart_4->geometry().left();
       ui->chart_4->move(x1,chart_val);
       ui->lbl_chart_4->move(x2,label_val);
       ui->lbl_chart_4->setText(info);
       }
       if ( m == 4)
       {
       int x1 = ui->chart_5->geometry().left();
       int x2 = ui->lbl_chart_5->geometry().left();
       ui->chart_5->move(x1,chart_val);
       ui->lbl_chart_5->move(x2,label_val);
       ui->lbl_chart_5->setText(info);
       }

   }


}

void MainWindow::on_btn_vote1_clicked()
{
    int x1 = rand() % 20;
    int x2 = rand() % 20;
    int x3 = rand() % 20;
    int x4 = rand() % 10;
    int x5 = rand() % 25;

    chart_numbers[0] = x1;
    chart_numbers[1] = x2;
    chart_numbers[2] = x3;
    chart_numbers[3] = x4;
    chart_numbers[4] = x5;

    chart_names[0] = "val1";
    chart_names[1] = "val2";
    chart_names[2] = "val3";
    chart_names[3] = "val4";
    chart_names[4] = "val5";

    chart_max = 5;
    update_chart();
    update_table();
}

void MainWindow::on_btn_vote2_clicked()
{

}

void MainWindow::on_btn_vote3_clicked()
{

}

void MainWindow::on_btn_show_clock_clicked()
{

}

void MainWindow::on_btn_show_number_clicked()
{

}

void MainWindow::on_btn_show_chart_clicked()
{

}

void MainWindow::on_btn_show_text_clicked()
{

}

void MainWindow::on_btn_start_vote_clicked()
{

}

void MainWindow::on_btn_option_chart_clicked()
{
    ui->mid_8->setCurrentIndex(0);
}

void MainWindow::on_btn_option_table_clicked()
{
    ui->mid_8->setCurrentIndex(1);
}



void MainWindow::on_btn_option_rate_clicked()
{
    chart_mode = 1;
    update_chart();
}

void MainWindow::on_btn_option_quantity_clicked()
{
    chart_mode = 0;
    update_chart();
}

void MainWindow::on_tabWidget_4_currentChanged(int index)
{

    if ( index == 0)
    {
        ui->btn_option_chart->hide();
        ui->btn_option_table->hide();

        ui->btn_option_quantity->hide();
        ui->btn_option_rate->hide();
    }
    else
    {
        ui->btn_option_chart->show();
        ui->btn_option_table->show();

        if ( ui->mid_8->currentIndex() == 0)
        {
           ui->btn_option_quantity->show();
           ui->btn_option_rate->show();
        }
        else
        {
            ui->btn_option_quantity->hide();
            ui->btn_option_rate->hide();
        }
    }
}

void MainWindow::on_slider1_sliderPressed()
{
    ui->slider1->setValue(15);
    ui->slider1->setSliderPosition(15);
     ui->lbl_slider1->setText("-");
    camera_stop_zoom = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":ZS." + _num2 + ")";
}

void MainWindow::on_slider1_sliderMoved(int position)
{
    slider1_active = true;
    int value = position;
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    if ( value >= 0 && value <= 10  )
    {
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZI." + _num2 + ")";
           ui->lbl_slider1->setText("I");
    }
    if ( value > 10 && value <= 20 )
    {
        //mid
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZS." + _num2 + ")";
         ui->lbl_slider1->setText("-");
    }
    if ( value > 20 && value <= 30)
    {
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZO." + _num2 + ")";
         ui->lbl_slider1->setText("O");
    }
}

void MainWindow::on_slider2_sliderMoved(int position)
{
    slider2_active = true;
    int value = position;
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    if ( value >= 0 && value <= 10 )
    {
         ui->lbl_slider2->setText("I");
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FF." + _num2 + ")";
    }
    if ( value > 10 && value <= 20 )
    {
        //mid
        ui->lbl_slider2->setText("-");
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FS." + _num2 + ")";
    }
    if ( value > 20 && value <= 30 )
    {
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FN." + _num2 + ")";
         ui->lbl_slider2->setText("O");
    }
}

bool MainWindow::eventFilter(QObject *o, QEvent *e)
{
    if ( e->type() == QEvent::MouseButtonRelease)
    {

    }

    return true;
}

void MainWindow::on_slider3_sliderMoved(int position)
{
    slider3_active = true;
    int value = position;
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    if (value >= 0 && value <= 10)
    {
        ui->lbl_slider3->setText("I");
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":II." + _num2 + ")";
    }
    if (value > 10 && value <= 20)
    {
        ui->lbl_slider3->setText("-");
        //mid
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":IS." + _num2 + ")";
    }
    if (value > 20 && value <= 30)
    {
        ui->lbl_slider3->setText("O");
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":IO." + _num2 + ")";
    }
}

void MainWindow::on_slider4_sliderMoved(int position)
{

}

void MainWindow::on_slider2_sliderPressed()
{
    ui->slider2->setValue(15);
    ui->slider2->setSliderPosition(15);
     ui->lbl_slider2->setText("-");
    camera_stop_focus = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":FS." + _num2 + ")";
}

void MainWindow::on_slider3_sliderPressed()
{
    ui->slider3->setValue(15);
    ui->slider3->setSliderPosition(15);
    ui->lbl_slider3->setText("-");
    camera_stop_iris = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(mtlog->camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":IS." + _num2 + ")";
}



void MainWindow::on_tabWidget_currentChanged(int index)
{

}

void MainWindow::on_pushButton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_slider5_valueChanged(int value)
{
    int val = value * 2;
    std::string _val = QString::number(val).toStdString() + "%";
    speaker_volume_temp = val;
    ui->lbl_slider5->setText(_val.c_str());
}

void MainWindow::on_slider5_sliderReleased()
{

}

void MainWindow::on_slider5_sliderMoved(int position)
{

}

void MainWindow::on_btn_save_2_clicked()
{
    mtlog->serial1_baud = ui->txt_baudrate1->toPlainText().toInt();
    mtlog->serial2_baud = ui->txt_baudrate2->toPlainText().toInt();
    mtlog->serial1_name = ui->txt_serial_name1->toPlainText().toStdString();
    mtlog->serial2_name = ui->txt_serial_name2->toPlainText().toStdString();

     bool r = mtlog->save_config();
     if ( r )
     {
         bar_info = "Config Saved !";
     }
     else
     {
         bar_info = "Failed";
     }
}

void MainWindow::on_btn_today_2_clicked()
{
    QDateTime _time = QDateTime::currentDateTime();
    ui->dt_to->setDateTime(_time);
}

void MainWindow::on_mid_8_currentChanged(int index)
{
    if ( index == 0)
    {
       ui->btn_option_quantity->show();
       ui->btn_option_rate->show();
    }
    else
    {
        ui->btn_option_quantity->hide();
        ui->btn_option_rate->hide();
    }
}

void MainWindow::on_btn_select1_clicked()
{
    ui->txt_serial_name1->setPlainText(ui->cmb_serial1->currentText());
}

void MainWindow::on_btn_select2_clicked()
{
    ui->txt_serial_name2->setPlainText(ui->cmb_serial2->currentText());
}
