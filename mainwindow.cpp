#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _maintimer = new QTimer(this);
    connect(_maintimer, SIGNAL(timeout()), this, SLOT(TimerEvent()));
    this->_maintimer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_recstart_clicked()
{
  QString item = ui->txt_recname->toPlainText();
  mtgclientrecord->recorde_start(item.toStdString());
}

void MainWindow::update_ui()
{

}

void MainWindow::TimerEvent()
{
  std::cout << "Timer expired." << std::endl;

}

void MainWindow::on_btn_recstop_clicked()
{
  mtgclientrecord->recorde_stop();
}

void MainWindow::on_btn_playstart_clicked()
{
  qDebug("1");
  QString item = ui->txt_playname->toPlainText();
  mtgclientplay->play_start(item.toStdString());
}

void MainWindow::on_btn_playstop_clicked()
{
 mtgclientplay->play_stop();
}

void MainWindow::on_pushButton_clicked()
{
    send_buffer = "send";
}
