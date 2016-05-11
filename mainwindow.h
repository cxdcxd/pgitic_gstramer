#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <statics.h>
#include <QTimer>
#include <QListWidgetItem>
#include <joystickscene.h>
#include "vector"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    virtual bool eventFilter(QObject *o, QEvent *e);
    virtual void closeEvent(QCloseEvent * event);

    void update_ui();
    bool isusbconnected();
    void update_folder_content();
    joystickscene *joyscene;
    void resize_ui();
    void update_serial_ports();

    void show_message(QString msg);
    void updatecs();
    void update_chart();
    void update_table();

    int chart_numbers[5];
    float chart_rates[5];
    int chart_max;
    std::string chart_names[5];
    int chart_mode;
    bool isresize_ui;

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

    std::string mode;
    std::string input;
    int timer_tick_counter;
    int bar_show_counter;

    bool slider1_active;
    bool slider2_active;
    bool slider3_active;




private slots:


    void TimerEvent();

    void on_btn_recstart_clicked();

    void on_btn_recstop_clicked();

    void on_btn_playstart_clicked();

    void on_btn_playstop_clicked();

    void on_lst_folder_info_itemClicked(QListWidgetItem *item);

    void on_btn_login_clicked();

    void on_cs1_clicked();

    void on_cs2_clicked();

    void on_cs3_clicked();

    void on_cs4_clicked();

    void on_cs5_clicked();

    void on_cs6_clicked();

    void on_s1_clicked();

    void on_s2_clicked();

    void on_s3_clicked();

    void on_s4_clicked();

    void on_s5_clicked();

    void on_s6_clicked();

    void on_s7_clicked();

    void on_s8_clicked();

    void on_s9_clicked();

    void on_sclear_clicked();

    void on_s0_clicked();

    void on_sback_clicked();

    void on_soff_clicked();

    void on_sok_clicked();

    void on_sshome_clicked();

    void on_shome_clicked();

    void on_ssmic_clicked();

    void on_sapreset_clicked();

    void on_smpreset_clicked();

    void on_d1_clicked();

    void on_d2_clicked();

    void on_d3_clicked();

    void on_d4_clicked();

    void on_d5_clicked();

    void on_d6_clicked();

    void on_d7_clicked();

    void on_d8_clicked();

    void on_cmodel_textChanged(const QString &arg1);

    void on_smodel_textChanged(const QString &arg1);

    void on_cmodel_currentIndexChanged(const QString &arg1);

    void on_smodel_currentIndexChanged(const QString &arg1);

    void on_d1_released();

    void on_d2_released();

    void on_d3_released();

    void on_d4_released();

    void on_d5_released();

    void on_d6_released();

    void on_d7_released();

    void on_d8_released();

    void on_slider1_sliderReleased();

    void on_slider2_sliderReleased();

    void on_slider3_sliderReleased();

    void on_slider4_sliderReleased();

    void on_slider1_valueChanged(int value);

    void on_slider2_valueChanged(int value);

    void on_slider3_valueChanged(int value);

    void on_slider4_valueChanged(int value);

    void on_d1_pressed();

    void on_d2_pressed();

    void on_d3_pressed();

    void on_d4_pressed();

    void on_d5_pressed();

    void on_d6_pressed();

    void on_d7_pressed();

    void on_d8_pressed();

    void on_btn_save_clicked();

    void on_btn_change_admin_clicked();

    void on_btn_refresh_clicked();

    void on_tabWidget_selected(const QString &arg1);

    void on_btn_logout_clicked();

    void on_btn_mic_set_clicked();

    void on_btn_manual_set_clicked();

    void on_btn_log_delete_clicked();

    void on_btn_refresh_all_clicked();

    void on_btn_today_clicked();

    void on_Knob_valueChanged(double value);

    void on_btn_vote1_clicked();

    void on_btn_vote2_clicked();

    void on_btn_vote3_clicked();

    void on_btn_show_clock_clicked();

    void on_btn_show_number_clicked();

    void on_btn_show_chart_clicked();

    void on_btn_show_text_clicked();

    void on_btn_start_vote_clicked();

    void on_btn_option_chart_clicked();

    void on_btn_option_table_clicked();

    void on_tabWidget_3_currentChanged(int index);

    void on_btn_option_rate_clicked();

    void on_btn_option_quantity_clicked();

    void on_tabWidget_4_currentChanged(int index);

    void on_slider1_sliderPressed();

    void on_slider1_sliderMoved(int position);

    void on_slider2_sliderMoved(int position);

    void on_slider3_sliderMoved(int position);

    void on_slider4_sliderMoved(int position);

    void on_slider2_sliderPressed();

    void on_slider3_sliderPressed();

    void on_btn_save_serial_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_clicked();

    void on_slider5_valueChanged(int value);

    void on_slider5_sliderReleased();

    void on_slider5_sliderMoved(int position);

    void on_btn_save_2_clicked();

    void on_btn_today_2_clicked();

    void on_mid_8_currentChanged(int index);

private:
    Ui::MainWindow *ui;
    QTimer *_maintimer;
    bool usbstatus_changed;


};

#endif // MAINWINDOW_H
