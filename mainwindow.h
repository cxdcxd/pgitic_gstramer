#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <statics.h>
#include <QTimer>
#include <QListWidgetItem>



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

private slots:


    void TimerEvent();

    void on_btn_recstart_clicked();

    void on_btn_recstop_clicked();

    void on_btn_playstart_clicked();

    void on_btn_playstop_clicked();

    void on_pushButton_clicked();

    void on_lst_folder_info_itemClicked(QListWidgetItem *item);

    void on_btn_playpause_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *_maintimer;
    bool usbstatus_changed;
};

#endif // MAINWINDOW_H
