#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <statics.h>
#include <QTimer>
#include <QListWidgetItem>
#include <joystickscene.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void update_ui();
    bool isusbconnected();
    void update_folder_content();
    joystickscene *joyscene;
    int camera_id;
    void updatecs();

    QPixmap *pic_cam_10;
    QPixmap *pic_cam_20;
    QPixmap *pic_cam_30;
    QPixmap *pic_cam_40;
    QPixmap *pic_cam_50;
    QPixmap *pic_cam_60;

    QPixmap *pic_cam_11;
    QPixmap *pic_cam_21;
    QPixmap *pic_cam_31;
    QPixmap *pic_cam_41;
    QPixmap *pic_cam_51;
    QPixmap *pic_cam_61;

    QPixmap *pic_connected;
    QPixmap *pic_disconnected;

    QIcon *icon10;
    QIcon *icon20;
    QIcon *icon30;
    QIcon *icon40;
    QIcon *icon50;
    QIcon *icon60;

    QIcon *icon11;
    QIcon *icon21;
    QIcon *icon31;
    QIcon *icon41;
    QIcon *icon51;
    QIcon *icon61;

    QIcon *icon_connected;
    QIcon *icon_disconnected;

private slots:


    void TimerEvent();

    void on_btn_recstart_clicked();

    void on_btn_recstop_clicked();

    void on_btn_playstart_clicked();

    void on_btn_playstop_clicked();

    void on_pushButton_clicked();

    void on_lst_folder_info_itemClicked(QListWidgetItem *item);

    void on_btn_playpause_clicked();

    void on_btn_login_clicked();

    void on_cs1_clicked();

    void on_cs2_clicked();

    void on_cs3_clicked();

    void on_cs4_clicked();

    void on_cs5_clicked();

    void on_cs6_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *_maintimer;
    bool usbstatus_changed;

};

#endif // MAINWINDOW_H
