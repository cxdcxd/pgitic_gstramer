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
    this->_maintimer->start(50);

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

    for ( int i = 0 ; i < list_camera_models.size() ; i++)
        ui->cmodel->addItem(list_camera_models.at(i).c_str());

    for ( int i = 0 ; i < list_controller_models.size() ; i++)
        ui->smodel->addItem(list_controller_models.at(i).c_str());

    status = "S";
    user_mode = "admin";
    mode = "IDLE";
    input = "";
    camera_id = 1;
    camera_speed = 4;

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

    //NOTE: add this in code not ui
    //   for ( int i = 0 ; i < list_camera_models.size() ; i++)
    //   {
    //      std::string _item = list_camera_models.at(i);
    //      QString item = _item.c_str();
    //      ui->cmodel->insertItem(0,"1");
    //   }
    //   for ( int j = 0 ; j < list_controller_models.size() ; j++)
    //      ui->smodel->addItem(list_controller_models.at(j).c_str());

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

    ui->txt_mode->setText(mode.c_str());
    ui->txt_input->setText(input.c_str());

    ui->txt_bar_info->setText(bar_info.c_str());

    ui->txt_micnum->setText(mic_number.c_str());
    ui->txt_camnum->setText(cam_number.c_str());
    ui->txt_totalnum->setText(total_number.c_str());
}

int update_counter;
void MainWindow::TimerEvent()
{
    //std::cout << "Timer expired." << std::endl;
    timer_tick_counter++;
    if ( timer_tick_counter > 6)
    {
        timer_tick_counter=0;
        update_ui();
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
   QString a = ui->txt_username->toPlainText().trimmed();
   QString b = ui->txt_password->toPlainText().trimmed();

   if ( a == "" ) { bar_info = "please fill all blanks"; return; }
   if ( b == "" ) { bar_info = "please fill all blanks"; return; }

   if ( a.toStdString() == "admin" && b.toStdString() == mtlog->admin_pass )
   {
       ui->frm_lock->hide();
       tcpsocket->set_camera_mode(true);
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

    if ( tcpsocket->isconnected == false)
    {
        mode = "IDLE";
        input = "";
        show_message("Please Check your server connection");
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
    ui->slider1->setValue(2);
    camera_stop_zoom = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":ZS." + _num2 + ")";

}

void MainWindow::on_slider2_sliderReleased()
{
    ui->slider2->setValue(2);
    camera_stop_focus = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":FS." + _num2 + ")";

}

void MainWindow::on_slider3_sliderReleased()
{
    ui->slider3->setValue(2);
    camera_stop_iris = true;
    camera_loop_mode = false;
    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    last_command = "(CAM," + mtlog->camera_model + ";" +  _num1 + ":IS." + _num2 + ")";
}

void MainWindow::on_slider4_sliderReleased()
{

}

void MainWindow::on_slider1_valueChanged(int value)
{
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    if ( value == 3  )
    {
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZI." + _num2 + ")";
    }
    if ( value == 2 )
    {
        //mid
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZS." + _num2 + ")";
    }
    if ( value == 1)
    {
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":ZO." + _num2 + ")";
    }
}

void MainWindow::on_slider2_valueChanged(int value)
{
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    if ( value == 3  )
    {
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FF." + _num2 + ")";
    }
    if ( value == 2 )
    {
        //mid
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FS." + _num2 + ")";
    }
    if ( value == 1)
    {
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":FN." + _num2 + ")";
    }
}

void MainWindow::on_slider3_valueChanged(int value)
{
    camera_loop_mode = true;

    QString num1 = QString::number(camera_id);
    std::string _num1 = num1.toStdString();

    QString num2 = QString::number(camera_speed);
    std::string _num2 = num2.toStdString();

    if (value == 3)
    {
        //up
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":II." + _num2 + ")";
    }
    if (value == 2)
    {
        //mid
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":IS." + _num2 + ")";
    }
    if (value == 1)
    {
        //down
        last_command = "(CAM," + mtlog->camera_model + ";" + _num1 + ":IO." + _num2 + ")";
    }
}

void MainWindow::on_slider4_valueChanged(int value)
{
    camera_speed = value;
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
 mtlog->logout_idle = ui->chm_logout->isChecked();
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

}

void MainWindow::on_btn_change_user_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_btn_refresh_clicked()
{
    ui->lst_log->clear();
    std::vector<std::string> data = mtlog->get_log();
    for ( int i = 0 ; i < data.size() ; i++)
    {
        QString item = data.at(i).c_str();
        ui->lst_log->addItem(item);
    }
}

void MainWindow::on_tabWidget_selected(const QString &arg1)
{


        ui->txt_ip->setText( mtlog->remote_ip.c_str());
        ui->txt_port->setText(mtlog->remote_port.c_str());
        ui->txt_loop_value->setText(QString::number(mtlog->loop_value));
        ui->chm_joyx->setChecked(mtlog->joyx);
        ui->chm_joyy->setChecked(mtlog->joyy);
        ui->chm_logout->setChecked(mtlog->logout_idle);
        ui->chm_loop->setChecked(mtlog->cmd_loop);
        QString camera_model = mtlog->camera_model.c_str();
        QString controller_model = mtlog->controller_model.c_str();

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

void MainWindow::on_btn_logout_clicked()
{
    ui->frm_lock->show();
    bar_info = "Logged Out ! ";
    tcpsocket->set_camera_mode(false);
}


