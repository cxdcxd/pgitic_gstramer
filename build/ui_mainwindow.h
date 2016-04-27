/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 27 08:32:03 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>
#include "qwt_knob.h"
#include "qwt_thermo.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_13;
    QGroupBox *groupBox_3;
    QLabel *txt_Mmicnum;
    QFrame *frame_7;
    QFrame *frame_9;
    QLabel *txt_Mtotalnum;
    QFrame *frame_8;
    QLabel *label_31;
    QLabel *txt_Mcamnum;
    QLabel *label_32;
    QFrame *monitor_dcu;
    QLabel *label_33;
    QFrame *monitor_serial;
    QLabel *label_34;
    QLabel *monitor_recording;
    QLabel *label_36;
    QFrame *monitor_usb;
    QLabel *label_45;
    QLabel *label_49;
    QLabel *lbl_camera_model;
    QLabel *lbl_controller_model;
    QFrame *monitor_serial2;
    QLabel *label_50;
    QLabel *lbl_volume;
    QLabel *label_52;
    QFrame *frame_13;
    QFrame *frame_14;
    QLabel *label_51;
    QLabel *lbl_volume_2;
    QFrame *frame_12;
    QWidget *tab;
    QLabel *label_2;
    QPushButton *btn_playstart;
    QPushButton *btn_playstop;
    QTextEdit *txt_recname;
    QPushButton *btn_recstart;
    QProgressBar *progressBar;
    QFrame *img_usbstorage1;
    QLabel *label_3;
    QLabel *label_8;
    QFrame *img_usbstorage0;
    QListWidget *lst_folder_info;
    QPushButton *btn_recstop;
    QLabel *label_47;
    QwtKnob *Knob;
    QLabel *lbl_info;
    QWidget *tab_8;
    QTabWidget *tabWidget_2;
    QWidget *tab_10;
    QFrame *frame_5;
    QPushButton *cs5;
    QPushButton *cs2;
    QPushButton *cs6;
    QPushButton *cs3;
    QPushButton *cs1;
    QPushButton *cs4;
    QFrame *frame_4;
    QGraphicsView *view_joystick;
    QPushButton *sback;
    QPushButton *s4;
    QPushButton *s1;
    QPushButton *s6;
    QPushButton *s8;
    QPushButton *sclear;
    QPushButton *s3;
    QPushButton *s2;
    QPushButton *s5;
    QPushButton *s0;
    QPushButton *s7;
    QPushButton *s9;
    QPushButton *d1;
    QPushButton *d5;
    QPushButton *d3;
    QPushButton *d7;
    QPushButton *d2;
    QPushButton *d4;
    QPushButton *d6;
    QPushButton *d8;
    QGraphicsView *graphicsView;
    QPushButton *soff;
    QPushButton *sok;
    QPushButton *sapreset;
    QPushButton *ssmic;
    QPushButton *smpreset;
    QPushButton *shome;
    QPushButton *sshome;
    QTextEdit *txt_mode;
    QTextEdit *txt_input;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *frame_6;
    QFrame *status;
    QLabel *label_13;
    QLabel *txt_camnum;
    QLabel *txt_totalnum;
    QLabel *txt_micnum;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *smodel;
    QComboBox *cmodel;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_14;
    QFrame *frm_lock;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *btn_login;
    QLineEdit *txt_password;
    QLineEdit *txt_username;
    QCheckBox *chm_remember;
    QPushButton *btn_logout;
    QScrollBar *slider1;
    QScrollBar *slider2;
    QScrollBar *slider3;
    QScrollBar *slider4;
    QLabel *lbl_slider4;
    QLabel *lbl_slider3;
    QLabel *lbl_slider2;
    QLabel *lbl_slider1;
    QFrame *frame_15;
    QWidget *tab_11;
    QGroupBox *groupBox_2;
    QRadioButton *rad_manual;
    QRadioButton *rad_boss;
    QRadioButton *rad_fifo;
    QComboBox *cmb_fifo;
    QPushButton *btn_mic_set;
    QLabel *label_28;
    QGroupBox *groupBox_6;
    QComboBox *cmb_micstatus;
    QComboBox *cmb_micnumber;
    QLabel *label_29;
    QLabel *label_30;
    QPushButton *btn_manual_set;
    QWidget *tab_7;
    QGroupBox *groupBox_5;
    QPushButton *btn_start_vote;
    QPushButton *btn_vote1;
    QPushButton *btn_vote2;
    QPushButton *btn_vote3;
    QPushButton *btn_show_clock;
    QPushButton *btn_show_chart;
    QPushButton *btn_show_number;
    QPushButton *btn_show_text;
    QTabWidget *tabWidget_3;
    QWidget *tab_2;
    QTextEdit *textEdit_4;
    QLabel *label_38;
    QLabel *label_37;
    QTextEdit *textEdit_5;
    QWidget *tab_3;
    QTabWidget *tabWidget_4;
    QWidget *tab_9;
    QLabel *lbl_lable4;
    QLabel *lbl_lable2;
    QLabel *lbl_lable1;
    QLabel *lbl_lable3;
    QwtThermo *rate_box;
    QFrame *frame_3;
    QLabel *lbl_chart_1;
    QPushButton *chart_1;
    QPushButton *chart_2;
    QPushButton *chart_3;
    QPushButton *chart_4;
    QPushButton *chart_5;
    QLabel *lbl_chart_2;
    QLabel *lbl_chart_3;
    QLabel *lbl_chart_4;
    QLabel *lbl_chart_5;
    QFrame *frame_10;
    QFrame *frame_11;
    QLabel *lbl_lable5;
    QWidget *tab_12;
    QTableWidget *table_result;
    QProgressBar *progress_vote;
    QPushButton *btn_option_chart;
    QPushButton *btn_option_table;
    QPushButton *btn_option_rate;
    QPushButton *btn_option_quantity;
    QWidget *tab_4;
    QGroupBox *groupBox;
    QCheckBox *chm_joyx;
    QCheckBox *chm_joyy;
    QCheckBox *chm_loop;
    QTextEdit *txt_loop_value;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QTextEdit *txt_ip;
    QTextEdit *txt_port;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *btn_change_admin;
    QPushButton *btn_save;
    QLineEdit *txt_admin_pass;
    QLineEdit *txt_admin_new;
    QLineEdit *txt_admin_confirm;
    QGroupBox *groupBox_7;
    QLabel *label_25;
    QComboBox *cmb_serial1;
    QLabel *label_26;
    QLabel *label_27;
    QTextEdit *txt_baudrate1;
    QFrame *line;
    QLabel *label_53;
    QLabel *label_54;
    QComboBox *cmb_serial2;
    QTextEdit *txt_baudrate2;
    QLabel *label_55;
    QWidget *tab_5;
    QListWidget *lst_log;
    QLabel *label_4;
    QListWidget *lst_clients;
    QGroupBox *groupBox_4;
    QPushButton *btn_refresh_all;
    QLabel *label_35;
    QPushButton *btn_log_delete;
    QDateTimeEdit *dt_from;
    QTextEdit *txt_log_sender;
    QLabel *label_39;
    QPushButton *btn_refresh;
    QLabel *label_42;
    QDateTimeEdit *dt_to;
    QLabel *label_43;
    QComboBox *cmb_log_type;
    QPushButton *btn_today;
    QLabel *label_44;
    QLabel *lbl_db_size;
    QLabel *label_46;
    QLabel *lbl_storage;
    QLabel *label_48;
    QLabel *lbl_freespace;
    QWidget *tab_6;
    QFrame *frame;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_40;
    QLabel *label_41;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *txt_bar_info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1357, 825);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #2f8eff;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #909090;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #067bca);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #1a71d7;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #1a71d7*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b"
                        "1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #1a71d7;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0,"
                        " x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #1a71d7;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png"
                        ");\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #2f8eff, stop: 0.5 #1a71d7, stop: 1 #2f8eff);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"      width: 14px;\n"
"      subcon"
                        "trol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradi"
                        "ent( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 0.5 #1a71d7, stop: 1 #2f8eff);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2f8eff, stop: 1 #1a71d7);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #1a71d7, stop: 1 #2f8eff);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical,"
                        " QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232"
                        ", stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #1a71d7, stop:0.5 #b56c17 stop:1 #2f8eff);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the t"
                        "ool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #1a71d7;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
" "
                        "   margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #1a71d7;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #1a71d7);\n"
""
                        "}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 60, 1321, 671));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        groupBox_3 = new QGroupBox(tab_13);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(120, 120, 1081, 381));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 95);"));
        txt_Mmicnum = new QLabel(groupBox_3);
        txt_Mmicnum->setObjectName(QString::fromUtf8("txt_Mmicnum"));
        txt_Mmicnum->setGeometry(QRect(450, 90, 71, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        txt_Mmicnum->setFont(font);
        txt_Mmicnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_7 = new QFrame(groupBox_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(120, 50, 60, 60));
        frame_7->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/camera.png)  0 0 0 0 100 stretch;\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_9 = new QFrame(groupBox_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(400, 60, 50, 50));
        frame_9->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/nico/mic.png)  0 0 0 0 100 stretch;\n"
""));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        txt_Mtotalnum = new QLabel(groupBox_3);
        txt_Mtotalnum->setObjectName(QString::fromUtf8("txt_Mtotalnum"));
        txt_Mtotalnum->setGeometry(QRect(320, 90, 71, 16));
        txt_Mtotalnum->setFont(font);
        txt_Mtotalnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_8 = new QFrame(groupBox_3);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(270, 60, 50, 50));
        frame_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/nico/plug.png)  0 0 0 0 100 stretch;\n"
""));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(50, 70, 61, 16));
        QFont font1;
        font1.setPointSize(11);
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_Mcamnum = new QLabel(groupBox_3);
        txt_Mcamnum->setObjectName(QString::fromUtf8("txt_Mcamnum"));
        txt_Mcamnum->setGeometry(QRect(180, 90, 61, 16));
        txt_Mcamnum->setFont(font);
        txt_Mcamnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(50, 160, 131, 16));
        label_32->setFont(font1);
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        monitor_dcu = new QFrame(groupBox_3);
        monitor_dcu->setObjectName(QString::fromUtf8("monitor_dcu"));
        monitor_dcu->setGeometry(QRect(190, 150, 31, 31));
        monitor_dcu->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/wific1.png)  0 0 0 0 100 stretch;\n"
""));
        monitor_dcu->setFrameShape(QFrame::StyledPanel);
        monitor_dcu->setFrameShadow(QFrame::Raised);
        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(270, 160, 151, 16));
        label_33->setFont(font1);
        label_33->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        monitor_serial = new QFrame(groupBox_3);
        monitor_serial->setObjectName(QString::fromUtf8("monitor_serial"));
        monitor_serial->setGeometry(QRect(410, 150, 31, 31));
        monitor_serial->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/seriald.png)  0 0 0 0 100 stretch;\n"
""));
        monitor_serial->setFrameShape(QFrame::StyledPanel);
        monitor_serial->setFrameShadow(QFrame::Raised);
        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(280, 240, 131, 16));
        label_34->setFont(font1);
        label_34->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        monitor_recording = new QLabel(groupBox_3);
        monitor_recording->setObjectName(QString::fromUtf8("monitor_recording"));
        monitor_recording->setGeometry(QRect(420, 230, 51, 41));
        monitor_recording->setFont(font1);
        monitor_recording->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        monitor_recording->setFrameShape(QFrame::Box);
        monitor_recording->setFrameShadow(QFrame::Sunken);
        monitor_recording->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(50, 240, 131, 16));
        label_36->setFont(font1);
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        monitor_usb = new QFrame(groupBox_3);
        monitor_usb->setObjectName(QString::fromUtf8("monitor_usb"));
        monitor_usb->setGeometry(QRect(190, 220, 51, 51));
        monitor_usb->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/storage0.png)  0 0 0 0 100 stretch;\n"
""));
        monitor_usb->setFrameShape(QFrame::StyledPanel);
        monitor_usb->setFrameShadow(QFrame::Raised);
        label_45 = new QLabel(groupBox_3);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(580, 60, 131, 16));
        label_45->setFont(font1);
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_49 = new QLabel(groupBox_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(820, 60, 131, 16));
        label_49->setFont(font1);
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_camera_model = new QLabel(groupBox_3);
        lbl_camera_model->setObjectName(QString::fromUtf8("lbl_camera_model"));
        lbl_camera_model->setGeometry(QRect(580, 90, 191, 31));
        lbl_camera_model->setFont(font);
        lbl_camera_model->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_camera_model->setFrameShape(QFrame::Box);
        lbl_camera_model->setFrameShadow(QFrame::Sunken);
        lbl_camera_model->setAlignment(Qt::AlignCenter);
        lbl_controller_model = new QLabel(groupBox_3);
        lbl_controller_model->setObjectName(QString::fromUtf8("lbl_controller_model"));
        lbl_controller_model->setGeometry(QRect(820, 90, 211, 31));
        lbl_controller_model->setFont(font);
        lbl_controller_model->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_controller_model->setFrameShape(QFrame::Box);
        lbl_controller_model->setFrameShadow(QFrame::Sunken);
        lbl_controller_model->setAlignment(Qt::AlignCenter);
        monitor_serial2 = new QFrame(groupBox_3);
        monitor_serial2->setObjectName(QString::fromUtf8("monitor_serial2"));
        monitor_serial2->setGeometry(QRect(640, 150, 31, 31));
        monitor_serial2->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/seriald.png)  0 0 0 0 100 stretch;\n"
""));
        monitor_serial2->setFrameShape(QFrame::StyledPanel);
        monitor_serial2->setFrameShadow(QFrame::Raised);
        label_50 = new QLabel(groupBox_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(50, 340, 131, 16));
        label_50->setFont(font1);
        label_50->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_volume = new QLabel(groupBox_3);
        lbl_volume->setObjectName(QString::fromUtf8("lbl_volume"));
        lbl_volume->setGeometry(QRect(195, 325, 51, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_volume->setFont(font2);
        lbl_volume->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_volume->setFrameShape(QFrame::Box);
        lbl_volume->setFrameShadow(QFrame::Sunken);
        lbl_volume->setAlignment(Qt::AlignCenter);
        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(290, 340, 131, 16));
        label_52->setFont(font1);
        label_52->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_13 = new QFrame(groupBox_3);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(80, 290, 41, 41));
        frame_13->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/speaker.png)  0 0 0 0 100 stretch;\n"
""));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_14 = new QFrame(groupBox_3);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setGeometry(QRect(330, 290, 41, 41));
        frame_14->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/tool.png)  0 0 0 0 100 stretch;\n"
""));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        label_51 = new QLabel(groupBox_3);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(500, 160, 151, 16));
        label_51->setFont(font1);
        label_51->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_volume_2 = new QLabel(groupBox_3);
        lbl_volume_2->setObjectName(QString::fromUtf8("lbl_volume_2"));
        lbl_volume_2->setGeometry(QRect(420, 325, 51, 41));
        lbl_volume_2->setFont(font2);
        lbl_volume_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lbl_volume_2->setFrameShape(QFrame::Box);
        lbl_volume_2->setFrameShadow(QFrame::Sunken);
        lbl_volume_2->setAlignment(Qt::AlignCenter);
        txt_Mmicnum->raise();
        frame_7->raise();
        frame_9->raise();
        txt_Mtotalnum->raise();
        frame_8->raise();
        label_31->raise();
        txt_Mcamnum->raise();
        label_32->raise();
        monitor_dcu->raise();
        label_33->raise();
        monitor_serial->raise();
        label_34->raise();
        monitor_recording->raise();
        label_36->raise();
        monitor_usb->raise();
        label_45->raise();
        label_49->raise();
        lbl_camera_model->raise();
        lbl_controller_model->raise();
        label_50->raise();
        lbl_volume->raise();
        label_52->raise();
        frame_13->raise();
        frame_14->raise();
        label_51->raise();
        monitor_serial2->raise();
        lbl_volume_2->raise();
        frame_12 = new QFrame(tab_13);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(20, 20, 1281, 581));
        frame_12->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/core_splash.png)  0 0 0 0 100 stretch;\n"
""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_13, QString());
        frame_12->raise();
        groupBox_3->raise();
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 351, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        btn_playstart = new QPushButton(tab);
        btn_playstart->setObjectName(QString::fromUtf8("btn_playstart"));
        btn_playstart->setGeometry(QRect(450, 50, 151, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/images/Resource/Play/x1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playstart->setIcon(icon);
        btn_playstart->setIconSize(QSize(32, 32));
        btn_playstart->setCheckable(false);
        btn_playstop = new QPushButton(tab);
        btn_playstop->setObjectName(QString::fromUtf8("btn_playstop"));
        btn_playstop->setGeometry(QRect(450, 50, 151, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/images/Resource/Play/x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playstop->setIcon(icon1);
        btn_playstop->setIconSize(QSize(32, 32));
        txt_recname = new QTextEdit(tab);
        txt_recname->setObjectName(QString::fromUtf8("txt_recname"));
        txt_recname->setGeometry(QRect(370, 150, 491, 31));
        txt_recname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_recname->setReadOnly(true);
        btn_recstart = new QPushButton(tab);
        btn_recstart->setObjectName(QString::fromUtf8("btn_recstart"));
        btn_recstart->setGeometry(QRect(370, 50, 71, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/images/Resource/Play/x10.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_recstart->setIcon(icon2);
        btn_recstart->setIconSize(QSize(32, 32));
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(370, 100, 491, 16));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        img_usbstorage1 = new QFrame(tab);
        img_usbstorage1->setObjectName(QString::fromUtf8("img_usbstorage1"));
        img_usbstorage1->setGeometry(QRect(800, 190, 64, 64));
        img_usbstorage1->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Play/x6.png) 0 0 0 0 100 stretch;\n"
"\n"
"\n"
""));
        img_usbstorage1->setFrameShape(QFrame::StyledPanel);
        img_usbstorage1->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 130, 351, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 190, 121, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        img_usbstorage0 = new QFrame(tab);
        img_usbstorage0->setObjectName(QString::fromUtf8("img_usbstorage0"));
        img_usbstorage0->setGeometry(QRect(800, 190, 64, 64));
        img_usbstorage0->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Play/x7.png) 0 0 0 0 100 stretch;\n"
"\n"
"\n"
""));
        img_usbstorage0->setFrameShape(QFrame::StyledPanel);
        img_usbstorage0->setFrameShadow(QFrame::Raised);
        lst_folder_info = new QListWidget(tab);
        lst_folder_info->setObjectName(QString::fromUtf8("lst_folder_info"));
        lst_folder_info->setGeometry(QRect(20, 50, 331, 401));
        lst_folder_info->setFont(font);
        btn_recstop = new QPushButton(tab);
        btn_recstop->setObjectName(QString::fromUtf8("btn_recstop"));
        btn_recstop->setGeometry(QRect(370, 50, 71, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/images/Resource/Play/x2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_recstop->setIcon(icon3);
        btn_recstop->setIconSize(QSize(32, 32));
        label_47 = new QLabel(tab);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(370, 280, 121, 16));
        label_47->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_47->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Knob = new QwtKnob(tab);
        Knob->setObjectName(QString::fromUtf8("Knob"));
        Knob->setGeometry(QRect(440, 270, 121, 101));
        Knob->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Knob->setKnobWidth(60);
        Knob->setBorderWidth(3);
        Knob->setSymbol(QwtKnob::Dot);
        lbl_info = new QLabel(tab);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setGeometry(QRect(616, 50, 241, 41));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        lbl_info->setFont(font3);
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_info->setFrameShape(QFrame::StyledPanel);
        lbl_info->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_2 = new QTabWidget(tab_8);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 1301, 611));
        tabWidget_2->setTabPosition(QTabWidget::South);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setElideMode(Qt::ElideMiddle);
        tabWidget_2->setUsesScrollButtons(false);
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        frame_5 = new QFrame(tab_10);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(250, 30, 50, 50));
        frame_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/nico/plug.png)  0 0 0 0 100 stretch;\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        cs5 = new QPushButton(tab_10);
        cs5->setObjectName(QString::fromUtf8("cs5"));
        cs5->setGeometry(QRect(960, 30, 60, 60));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam5_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs5->setIcon(icon4);
        cs5->setIconSize(QSize(50, 50));
        cs2 = new QPushButton(tab_10);
        cs2->setObjectName(QString::fromUtf8("cs2"));
        cs2->setGeometry(QRect(750, 30, 60, 60));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam2_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs2->setIcon(icon5);
        cs2->setIconSize(QSize(50, 50));
        cs6 = new QPushButton(tab_10);
        cs6->setObjectName(QString::fromUtf8("cs6"));
        cs6->setGeometry(QRect(1030, 30, 60, 60));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam6_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs6->setIcon(icon6);
        cs6->setIconSize(QSize(50, 50));
        cs3 = new QPushButton(tab_10);
        cs3->setObjectName(QString::fromUtf8("cs3"));
        cs3->setGeometry(QRect(820, 30, 60, 60));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam3_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs3->setIcon(icon7);
        cs3->setIconSize(QSize(50, 50));
        cs1 = new QPushButton(tab_10);
        cs1->setObjectName(QString::fromUtf8("cs1"));
        cs1->setGeometry(QRect(680, 30, 60, 60));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam1_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs1->setIcon(icon8);
        cs1->setIconSize(QSize(50, 50));
        cs4 = new QPushButton(tab_10);
        cs4->setObjectName(QString::fromUtf8("cs4"));
        cs4->setGeometry(QRect(890, 30, 60, 60));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam4_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs4->setIcon(icon9);
        cs4->setIconSize(QSize(50, 50));
        frame_4 = new QFrame(tab_10);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(390, 30, 50, 50));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/nico/mic.png)  0 0 0 0 100 stretch;\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        view_joystick = new QGraphicsView(tab_10);
        view_joystick->setObjectName(QString::fromUtf8("view_joystick"));
        view_joystick->setGeometry(QRect(970, 210, 291, 291));
        view_joystick->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Dcu/dcu_joystick.png) 0 0 0 0 100 stretch;\n"
"\n"
""));
        view_joystick->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view_joystick->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        sback = new QPushButton(tab_10);
        sback->setObjectName(QString::fromUtf8("sback"));
        sback->setGeometry(QRect(160, 390, 50, 50));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sans Serif"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        sback->setFont(font4);
        sback->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sback->setIconSize(QSize(12, 12));
        sback->setFlat(false);
        s4 = new QPushButton(tab_10);
        s4->setObjectName(QString::fromUtf8("s4"));
        s4->setGeometry(QRect(40, 270, 50, 50));
        s4->setFont(font4);
        s4->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s4->setIconSize(QSize(12, 12));
        s4->setFlat(false);
        s1 = new QPushButton(tab_10);
        s1->setObjectName(QString::fromUtf8("s1"));
        s1->setGeometry(QRect(40, 210, 50, 50));
        s1->setFont(font4);
        s1->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s1->setIconSize(QSize(12, 12));
        s1->setFlat(false);
        s6 = new QPushButton(tab_10);
        s6->setObjectName(QString::fromUtf8("s6"));
        s6->setGeometry(QRect(160, 270, 50, 50));
        s6->setFont(font4);
        s6->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s6->setIconSize(QSize(12, 12));
        s6->setFlat(false);
        s8 = new QPushButton(tab_10);
        s8->setObjectName(QString::fromUtf8("s8"));
        s8->setGeometry(QRect(100, 330, 50, 50));
        s8->setFont(font4);
        s8->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s8->setIconSize(QSize(12, 12));
        s8->setFlat(false);
        sclear = new QPushButton(tab_10);
        sclear->setObjectName(QString::fromUtf8("sclear"));
        sclear->setGeometry(QRect(40, 390, 50, 50));
        sclear->setFont(font4);
        sclear->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sclear->setIconSize(QSize(12, 12));
        sclear->setFlat(false);
        s3 = new QPushButton(tab_10);
        s3->setObjectName(QString::fromUtf8("s3"));
        s3->setGeometry(QRect(160, 210, 50, 50));
        s3->setFont(font4);
        s3->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s3->setIconSize(QSize(12, 12));
        s3->setFlat(false);
        s2 = new QPushButton(tab_10);
        s2->setObjectName(QString::fromUtf8("s2"));
        s2->setGeometry(QRect(100, 210, 50, 50));
        s2->setFont(font4);
        s2->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s2->setIconSize(QSize(12, 12));
        s2->setFlat(false);
        s5 = new QPushButton(tab_10);
        s5->setObjectName(QString::fromUtf8("s5"));
        s5->setGeometry(QRect(100, 270, 50, 50));
        s5->setFont(font4);
        s5->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s5->setIconSize(QSize(12, 12));
        s5->setFlat(false);
        s0 = new QPushButton(tab_10);
        s0->setObjectName(QString::fromUtf8("s0"));
        s0->setGeometry(QRect(100, 390, 50, 50));
        s0->setFont(font4);
        s0->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s0->setIconSize(QSize(12, 12));
        s0->setFlat(false);
        s7 = new QPushButton(tab_10);
        s7->setObjectName(QString::fromUtf8("s7"));
        s7->setGeometry(QRect(40, 330, 50, 50));
        s7->setFont(font4);
        s7->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s7->setIconSize(QSize(12, 12));
        s7->setFlat(false);
        s9 = new QPushButton(tab_10);
        s9->setObjectName(QString::fromUtf8("s9"));
        s9->setGeometry(QRect(160, 330, 50, 50));
        s9->setFont(font4);
        s9->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s9->setIconSize(QSize(12, 12));
        s9->setFlat(false);
        d1 = new QPushButton(tab_10);
        d1->setObjectName(QString::fromUtf8("d1"));
        d1->setGeometry(QRect(1080, 250, 75, 75));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/images/Resource/arrow/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        d1->setIcon(icon10);
        d5 = new QPushButton(tab_10);
        d5->setObjectName(QString::fromUtf8("d5"));
        d5->setGeometry(QRect(1080, 410, 75, 75));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/images/Resource/arrow/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        d5->setIcon(icon11);
        d3 = new QPushButton(tab_10);
        d3->setObjectName(QString::fromUtf8("d3"));
        d3->setGeometry(QRect(1160, 330, 75, 75));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/images/Resource/arrow/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        d3->setIcon(icon12);
        d7 = new QPushButton(tab_10);
        d7->setObjectName(QString::fromUtf8("d7"));
        d7->setGeometry(QRect(1000, 330, 75, 75));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/images/Resource/arrow/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        d7->setIcon(icon13);
        d2 = new QPushButton(tab_10);
        d2->setObjectName(QString::fromUtf8("d2"));
        d2->setGeometry(QRect(1160, 250, 75, 75));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u2.png"), QSize(), QIcon::Normal, QIcon::Off);
        d2->setIcon(icon14);
        d4 = new QPushButton(tab_10);
        d4->setObjectName(QString::fromUtf8("d4"));
        d4->setGeometry(QRect(1160, 410, 75, 75));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u3.png"), QSize(), QIcon::Normal, QIcon::Off);
        d4->setIcon(icon15);
        d6 = new QPushButton(tab_10);
        d6->setObjectName(QString::fromUtf8("d6"));
        d6->setGeometry(QRect(1000, 410, 75, 75));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u4.png"), QSize(), QIcon::Normal, QIcon::Off);
        d6->setIcon(icon16);
        d8 = new QPushButton(tab_10);
        d8->setObjectName(QString::fromUtf8("d8"));
        d8->setGeometry(QRect(1000, 250, 75, 75));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u1.png"), QSize(), QIcon::Normal, QIcon::Off);
        d8->setIcon(icon17);
        graphicsView = new QGraphicsView(tab_10);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(443, 209, 501, 291));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Dcu/control3.png) 0 0 0 0 100 stretch;\n"
"\n"
""));
        soff = new QPushButton(tab_10);
        soff->setObjectName(QString::fromUtf8("soff"));
        soff->setGeometry(QRect(40, 450, 170, 50));
        soff->setFont(font4);
        soff->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        soff->setIconSize(QSize(12, 12));
        soff->setFlat(false);
        sok = new QPushButton(tab_10);
        sok->setObjectName(QString::fromUtf8("sok"));
        sok->setGeometry(QRect(220, 450, 191, 50));
        sok->setFont(font4);
        sok->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sok->setIconSize(QSize(12, 12));
        sok->setFlat(false);
        sapreset = new QPushButton(tab_10);
        sapreset->setObjectName(QString::fromUtf8("sapreset"));
        sapreset->setGeometry(QRect(220, 210, 91, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Sans Serif"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        sapreset->setFont(font5);
        sapreset->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        sapreset->setIconSize(QSize(12, 12));
        sapreset->setFlat(false);
        ssmic = new QPushButton(tab_10);
        ssmic->setObjectName(QString::fromUtf8("ssmic"));
        ssmic->setGeometry(QRect(220, 270, 191, 51));
        ssmic->setFont(font5);
        ssmic->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        ssmic->setIconSize(QSize(12, 12));
        ssmic->setFlat(false);
        smpreset = new QPushButton(tab_10);
        smpreset->setObjectName(QString::fromUtf8("smpreset"));
        smpreset->setGeometry(QRect(320, 210, 91, 51));
        smpreset->setFont(font5);
        smpreset->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        smpreset->setIconSize(QSize(12, 12));
        smpreset->setFlat(false);
        shome = new QPushButton(tab_10);
        shome->setObjectName(QString::fromUtf8("shome"));
        shome->setGeometry(QRect(320, 330, 91, 51));
        shome->setFont(font5);
        shome->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        shome->setIconSize(QSize(12, 12));
        shome->setFlat(false);
        sshome = new QPushButton(tab_10);
        sshome->setObjectName(QString::fromUtf8("sshome"));
        sshome->setGeometry(QRect(220, 330, 91, 51));
        sshome->setFont(font5);
        sshome->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        sshome->setIconSize(QSize(12, 12));
        sshome->setFlat(false);
        txt_mode = new QTextEdit(tab_10);
        txt_mode->setObjectName(QString::fromUtf8("txt_mode"));
        txt_mode->setGeometry(QRect(40, 150, 171, 41));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        txt_mode->setFont(font6);
        txt_mode->setReadOnly(true);
        txt_input = new QTextEdit(tab_10);
        txt_input->setObjectName(QString::fromUtf8("txt_input"));
        txt_input->setGeometry(QRect(220, 150, 191, 41));
        txt_input->setFont(font6);
        txt_input->setReadOnly(true);
        label_10 = new QLabel(tab_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 130, 57, 14));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(tab_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 130, 57, 14));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_10);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(570, 40, 101, 20));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_6 = new QFrame(tab_10);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(110, 20, 60, 60));
        frame_6->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/nico/camera.png)  0 0 0 0 100 stretch;\n"
""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        status = new QFrame(tab_10);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(1230, 40, 31, 31));
        status->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/wific1.png)  0 0 0 0 100 stretch;\n"
""));
        status->setFrameShape(QFrame::StyledPanel);
        status->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(tab_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 40, 61, 16));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_camnum = new QLabel(tab_10);
        txt_camnum->setObjectName(QString::fromUtf8("txt_camnum"));
        txt_camnum->setGeometry(QRect(180, 60, 61, 16));
        txt_camnum->setFont(font);
        txt_camnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_totalnum = new QLabel(tab_10);
        txt_totalnum->setObjectName(QString::fromUtf8("txt_totalnum"));
        txt_totalnum->setGeometry(QRect(310, 60, 81, 16));
        txt_totalnum->setFont(font);
        txt_totalnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_micnum = new QLabel(tab_10);
        txt_micnum->setObjectName(QString::fromUtf8("txt_micnum"));
        txt_micnum->setGeometry(QRect(450, 60, 81, 16));
        txt_micnum->setFont(font);
        txt_micnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_17 = new QLabel(tab_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(470, 180, 91, 16));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(tab_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(990, 180, 91, 16));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        smodel = new QComboBox(tab_10);
        smodel->setObjectName(QString::fromUtf8("smodel"));
        smodel->setGeometry(QRect(320, 410, 91, 31));
        smodel->setCursor(QCursor(Qt::PointingHandCursor));
        cmodel = new QComboBox(tab_10);
        cmodel->setObjectName(QString::fromUtf8("cmodel"));
        cmodel->setGeometry(QRect(220, 410, 91, 31));
        cmodel->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(tab_10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 390, 91, 16));
        QFont font7;
        font7.setBold(true);
        font7.setWeight(75);
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 390, 91, 16));
        label_9->setFont(font7);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_10);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(1120, 40, 91, 20));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frm_lock = new QFrame(tab_10);
        frm_lock->setObjectName(QString::fromUtf8("frm_lock"));
        frm_lock->setGeometry(QRect(10, 20, 1261, 551));
        frm_lock->setFrameShape(QFrame::NoFrame);
        frm_lock->setFrameShadow(QFrame::Plain);
        label_15 = new QLabel(frm_lock);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(480, 130, 141, 16));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        label_15->setFont(font8);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_16 = new QLabel(frm_lock);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(480, 200, 141, 16));
        label_16->setFont(font8);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_login = new QPushButton(frm_lock);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(480, 300, 311, 41));
        txt_password = new QLineEdit(frm_lock);
        txt_password->setObjectName(QString::fromUtf8("txt_password"));
        txt_password->setGeometry(QRect(480, 220, 311, 41));
        QFont font9;
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setWeight(75);
        txt_password->setFont(font9);
        txt_password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_password->setEchoMode(QLineEdit::Password);
        txt_password->setAlignment(Qt::AlignCenter);
        txt_username = new QLineEdit(frm_lock);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));
        txt_username->setGeometry(QRect(480, 150, 311, 41));
        txt_username->setFont(font9);
        txt_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_username->setEchoMode(QLineEdit::Normal);
        txt_username->setAlignment(Qt::AlignCenter);
        chm_remember = new QCheckBox(frm_lock);
        chm_remember->setObjectName(QString::fromUtf8("chm_remember"));
        chm_remember->setGeometry(QRect(480, 270, 151, 20));
        chm_remember->setFont(font8);
        chm_remember->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_logout = new QPushButton(tab_10);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        btn_logout->setGeometry(QRect(1170, 530, 91, 25));
        slider1 = new QScrollBar(tab_10);
        slider1->setObjectName(QString::fromUtf8("slider1"));
        slider1->setGeometry(QRect(541, 250, 16, 225));
        slider1->setCursor(QCursor(Qt::PointingHandCursor));
        slider1->setMinimum(1);
        slider1->setMaximum(30);
        slider1->setValue(15);
        slider1->setSliderPosition(15);
        slider1->setTracking(true);
        slider1->setOrientation(Qt::Vertical);
        slider1->setInvertedControls(true);
        slider2 = new QScrollBar(tab_10);
        slider2->setObjectName(QString::fromUtf8("slider2"));
        slider2->setGeometry(QRect(634, 250, 16, 225));
        slider2->setCursor(QCursor(Qt::PointingHandCursor));
        slider2->setMinimum(1);
        slider2->setMaximum(30);
        slider2->setValue(15);
        slider2->setTracking(true);
        slider2->setOrientation(Qt::Vertical);
        slider2->setInvertedControls(true);
        slider3 = new QScrollBar(tab_10);
        slider3->setObjectName(QString::fromUtf8("slider3"));
        slider3->setGeometry(QRect(727, 250, 16, 225));
        slider3->setCursor(QCursor(Qt::PointingHandCursor));
        slider3->setMinimum(1);
        slider3->setMaximum(30);
        slider3->setValue(15);
        slider3->setTracking(true);
        slider3->setOrientation(Qt::Vertical);
        slider3->setInvertedControls(true);
        slider4 = new QScrollBar(tab_10);
        slider4->setObjectName(QString::fromUtf8("slider4"));
        slider4->setGeometry(QRect(821, 250, 16, 225));
        slider4->setCursor(QCursor(Qt::PointingHandCursor));
        slider4->setStyleSheet(QString::fromUtf8(""));
        slider4->setMinimum(1);
        slider4->setMaximum(30);
        slider4->setValue(15);
        slider4->setTracking(true);
        slider4->setOrientation(Qt::Vertical);
        slider4->setInvertedControls(true);
        lbl_slider4 = new QLabel(tab_10);
        lbl_slider4->setObjectName(QString::fromUtf8("lbl_slider4"));
        lbl_slider4->setGeometry(QRect(814, 480, 31, 16));
        lbl_slider4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        lbl_slider4->setAlignment(Qt::AlignCenter);
        lbl_slider3 = new QLabel(tab_10);
        lbl_slider3->setObjectName(QString::fromUtf8("lbl_slider3"));
        lbl_slider3->setGeometry(QRect(720, 480, 31, 16));
        lbl_slider3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        lbl_slider3->setAlignment(Qt::AlignCenter);
        lbl_slider2 = new QLabel(tab_10);
        lbl_slider2->setObjectName(QString::fromUtf8("lbl_slider2"));
        lbl_slider2->setGeometry(QRect(628, 480, 31, 16));
        lbl_slider2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        lbl_slider2->setAlignment(Qt::AlignCenter);
        lbl_slider1 = new QLabel(tab_10);
        lbl_slider1->setObjectName(QString::fromUtf8("lbl_slider1"));
        lbl_slider1->setGeometry(QRect(535, 480, 31, 16));
        lbl_slider1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        lbl_slider1->setAlignment(Qt::AlignCenter);
        tabWidget_2->addTab(tab_10, QString());
        graphicsView->raise();
        lbl_slider1->raise();
        lbl_slider2->raise();
        lbl_slider3->raise();
        lbl_slider4->raise();
        slider4->raise();
        slider3->raise();
        slider2->raise();
        slider1->raise();
        btn_logout->raise();
        frame_5->raise();
        cs5->raise();
        cs2->raise();
        cs6->raise();
        cs3->raise();
        cs1->raise();
        cs4->raise();
        frame_4->raise();
        view_joystick->raise();
        sback->raise();
        s4->raise();
        s1->raise();
        s6->raise();
        s8->raise();
        sclear->raise();
        s3->raise();
        s2->raise();
        s5->raise();
        s0->raise();
        s7->raise();
        s9->raise();
        d1->raise();
        d5->raise();
        d3->raise();
        d7->raise();
        d2->raise();
        d4->raise();
        d6->raise();
        d8->raise();
        soff->raise();
        sok->raise();
        sapreset->raise();
        ssmic->raise();
        smpreset->raise();
        shome->raise();
        sshome->raise();
        txt_mode->raise();
        txt_input->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        frame_6->raise();
        label_13->raise();
        txt_camnum->raise();
        txt_totalnum->raise();
        txt_micnum->raise();
        label_17->raise();
        label_18->raise();
        smodel->raise();
        cmodel->raise();
        label->raise();
        label_9->raise();
        frm_lock->raise();
        label_14->raise();
        status->raise();
        frame_15 = new QFrame(tab_8);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(10, 611, 21, 21));
        frame_15->setFrameShape(QFrame::NoFrame);
        frame_15->setFrameShadow(QFrame::Plain);
        tabWidget->addTab(tab_8, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        groupBox_2 = new QGroupBox(tab_11);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 90, 371, 271));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        rad_manual = new QRadioButton(groupBox_2);
        rad_manual->setObjectName(QString::fromUtf8("rad_manual"));
        rad_manual->setGeometry(QRect(30, 150, 131, 51));
        rad_manual->setFont(font);
        rad_manual->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        rad_boss = new QRadioButton(groupBox_2);
        rad_boss->setObjectName(QString::fromUtf8("rad_boss"));
        rad_boss->setGeometry(QRect(30, 90, 131, 51));
        rad_boss->setFont(font);
        rad_boss->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        rad_fifo = new QRadioButton(groupBox_2);
        rad_fifo->setObjectName(QString::fromUtf8("rad_fifo"));
        rad_fifo->setGeometry(QRect(30, 30, 131, 51));
        rad_fifo->setFont(font);
        rad_fifo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        cmb_fifo = new QComboBox(groupBox_2);
        cmb_fifo->setObjectName(QString::fromUtf8("cmb_fifo"));
        cmb_fifo->setGeometry(QRect(240, 45, 111, 24));
        cmb_fifo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_mic_set = new QPushButton(groupBox_2);
        btn_mic_set->setObjectName(QString::fromUtf8("btn_mic_set"));
        btn_mic_set->setGeometry(QRect(30, 210, 321, 41));
        btn_mic_set->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(130, 45, 81, 20));
        groupBox_6 = new QGroupBox(tab_11);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(430, 90, 291, 271));
        groupBox_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        cmb_micstatus = new QComboBox(groupBox_6);
        cmb_micstatus->setObjectName(QString::fromUtf8("cmb_micstatus"));
        cmb_micstatus->setGeometry(QRect(170, 50, 101, 24));
        cmb_micstatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cmb_micnumber = new QComboBox(groupBox_6);
        cmb_micnumber->setObjectName(QString::fromUtf8("cmb_micnumber"));
        cmb_micnumber->setGeometry(QRect(170, 20, 101, 24));
        cmb_micnumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(20, 50, 101, 20));
        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(20, 20, 101, 20));
        btn_manual_set = new QPushButton(groupBox_6);
        btn_manual_set->setObjectName(QString::fromUtf8("btn_manual_set"));
        btn_manual_set->setGeometry(QRect(20, 210, 251, 41));
        btn_manual_set->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_11, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        groupBox_5 = new QGroupBox(tab_7);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 10, 1281, 51));
        groupBox_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_start_vote = new QPushButton(groupBox_5);
        btn_start_vote->setObjectName(QString::fromUtf8("btn_start_vote"));
        btn_start_vote->setGeometry(QRect(1040, 20, 231, 21));
        btn_start_vote->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_vote1 = new QPushButton(groupBox_5);
        btn_vote1->setObjectName(QString::fromUtf8("btn_vote1"));
        btn_vote1->setGeometry(QRect(10, 20, 81, 21));
        btn_vote1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_vote2 = new QPushButton(groupBox_5);
        btn_vote2->setObjectName(QString::fromUtf8("btn_vote2"));
        btn_vote2->setGeometry(QRect(100, 20, 81, 21));
        btn_vote2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_vote3 = new QPushButton(groupBox_5);
        btn_vote3->setObjectName(QString::fromUtf8("btn_vote3"));
        btn_vote3->setGeometry(QRect(190, 20, 131, 21));
        btn_vote3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_show_clock = new QPushButton(groupBox_5);
        btn_show_clock->setObjectName(QString::fromUtf8("btn_show_clock"));
        btn_show_clock->setGeometry(QRect(600, 20, 101, 21));
        btn_show_clock->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_show_chart = new QPushButton(groupBox_5);
        btn_show_chart->setObjectName(QString::fromUtf8("btn_show_chart"));
        btn_show_chart->setGeometry(QRect(820, 20, 101, 21));
        btn_show_chart->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_show_number = new QPushButton(groupBox_5);
        btn_show_number->setObjectName(QString::fromUtf8("btn_show_number"));
        btn_show_number->setGeometry(QRect(710, 20, 101, 21));
        btn_show_number->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_show_text = new QPushButton(groupBox_5);
        btn_show_text->setObjectName(QString::fromUtf8("btn_show_text"));
        btn_show_text->setGeometry(QRect(930, 20, 101, 21));
        btn_show_text->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget_3 = new QTabWidget(tab_7);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 70, 1281, 541));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit_4 = new QTextEdit(tab_2);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(30, 200, 1211, 301));
        QFont font10;
        font10.setPointSize(36);
        font10.setBold(true);
        font10.setWeight(75);
        textEdit_4->setFont(font10);
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_38 = new QLabel(tab_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(30, 180, 81, 16));
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_37 = new QLabel(tab_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(30, 10, 131, 16));
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textEdit_5 = new QTextEdit(tab_2);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(30, 30, 1211, 141));
        textEdit_5->setFont(font10);
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tabWidget_3->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_4 = new QTabWidget(tab_3);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(-10, -10, 1291, 551));
        tabWidget_4->setStyleSheet(QString::fromUtf8(""));
        tabWidget_4->setTabPosition(QTabWidget::South);
        tabWidget_4->setTabShape(QTabWidget::Rounded);
        tabWidget_4->setElideMode(Qt::ElideNone);
        tabWidget_4->setUsesScrollButtons(false);
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        lbl_lable4 = new QLabel(tab_9);
        lbl_lable4->setObjectName(QString::fromUtf8("lbl_lable4"));
        lbl_lable4->setGeometry(QRect(830, 480, 81, 20));
        lbl_lable4->setFont(font2);
        lbl_lable4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lbl_lable4->setAlignment(Qt::AlignCenter);
        lbl_lable2 = new QLabel(tab_9);
        lbl_lable2->setObjectName(QString::fromUtf8("lbl_lable2"));
        lbl_lable2->setGeometry(QRect(390, 480, 81, 20));
        lbl_lable2->setFont(font2);
        lbl_lable2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lbl_lable2->setAlignment(Qt::AlignCenter);
        lbl_lable1 = new QLabel(tab_9);
        lbl_lable1->setObjectName(QString::fromUtf8("lbl_lable1"));
        lbl_lable1->setGeometry(QRect(180, 480, 81, 20));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Sans Serif"));
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setItalic(false);
        font11.setWeight(75);
        lbl_lable1->setFont(font11);
        lbl_lable1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lbl_lable1->setAlignment(Qt::AlignCenter);
        lbl_lable3 = new QLabel(tab_9);
        lbl_lable3->setObjectName(QString::fromUtf8("lbl_lable3"));
        lbl_lable3->setGeometry(QRect(610, 480, 81, 20));
        lbl_lable3->setFont(font2);
        lbl_lable3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lbl_lable3->setAlignment(Qt::AlignCenter);
        rate_box = new QwtThermo(tab_9);
        rate_box->setObjectName(QString::fromUtf8("rate_box"));
        rate_box->setGeometry(QRect(10, 40, 71, 441));
        rate_box->setFont(font);
        rate_box->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        rate_box->setBorderWidth(3);
        rate_box->setMaxValue(100);
        frame_3 = new QFrame(tab_9);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(60, 20, 1211, 491));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Sunken);
        lbl_chart_1 = new QLabel(frame_3);
        lbl_chart_1->setObjectName(QString::fromUtf8("lbl_chart_1"));
        lbl_chart_1->setGeometry(QRect(130, 10, 61, 21));
        lbl_chart_1->setFont(font2);
        lbl_chart_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_chart_1->setAlignment(Qt::AlignCenter);
        chart_1 = new QPushButton(frame_3);
        chart_1->setObjectName(QString::fromUtf8("chart_1"));
        chart_1->setGeometry(QRect(110, 30, 101, 431));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chart_1->sizePolicy().hasHeightForWidth());
        chart_1->setSizePolicy(sizePolicy);
        chart_1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(7, 15, 18, 241), stop:0.264317 rgba(91, 179, 250, 255), stop:0.647577 rgba(61, 83, 235, 255), stop:1 rgba(41, 41, 41, 247));"));
        chart_2 = new QPushButton(frame_3);
        chart_2->setObjectName(QString::fromUtf8("chart_2"));
        chart_2->setGeometry(QRect(320, 30, 101, 431));
        chart_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(7, 15, 18, 241), stop:0.264317 rgba(91, 179, 250, 255), stop:0.647577 rgba(61, 83, 235, 255), stop:1 rgba(41, 41, 41, 247));"));
        chart_3 = new QPushButton(frame_3);
        chart_3->setObjectName(QString::fromUtf8("chart_3"));
        chart_3->setGeometry(QRect(540, 30, 101, 431));
        chart_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(7, 15, 18, 241), stop:0.264317 rgba(91, 179, 250, 255), stop:0.647577 rgba(61, 83, 235, 255), stop:1 rgba(41, 41, 41, 247));"));
        chart_4 = new QPushButton(frame_3);
        chart_4->setObjectName(QString::fromUtf8("chart_4"));
        chart_4->setGeometry(QRect(760, 30, 101, 431));
        chart_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(7, 15, 18, 241), stop:0.264317 rgba(91, 179, 250, 255), stop:0.647577 rgba(61, 83, 235, 255), stop:1 rgba(41, 41, 41, 247));"));
        chart_5 = new QPushButton(frame_3);
        chart_5->setObjectName(QString::fromUtf8("chart_5"));
        chart_5->setGeometry(QRect(990, 30, 101, 431));
        chart_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(7, 15, 18, 241), stop:0.264317 rgba(91, 179, 250, 255), stop:0.647577 rgba(61, 83, 235, 255), stop:1 rgba(41, 41, 41, 247));"));
        lbl_chart_2 = new QLabel(frame_3);
        lbl_chart_2->setObjectName(QString::fromUtf8("lbl_chart_2"));
        lbl_chart_2->setGeometry(QRect(340, 10, 61, 21));
        lbl_chart_2->setFont(font2);
        lbl_chart_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_chart_2->setAlignment(Qt::AlignCenter);
        lbl_chart_3 = new QLabel(frame_3);
        lbl_chart_3->setObjectName(QString::fromUtf8("lbl_chart_3"));
        lbl_chart_3->setGeometry(QRect(560, 10, 61, 21));
        lbl_chart_3->setFont(font2);
        lbl_chart_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_chart_3->setAlignment(Qt::AlignCenter);
        lbl_chart_4 = new QLabel(frame_3);
        lbl_chart_4->setObjectName(QString::fromUtf8("lbl_chart_4"));
        lbl_chart_4->setGeometry(QRect(780, 10, 61, 21));
        lbl_chart_4->setFont(font2);
        lbl_chart_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_chart_4->setAlignment(Qt::AlignCenter);
        lbl_chart_5 = new QLabel(frame_3);
        lbl_chart_5->setObjectName(QString::fromUtf8("lbl_chart_5"));
        lbl_chart_5->setGeometry(QRect(1010, 10, 61, 21));
        lbl_chart_5->setFont(font2);
        lbl_chart_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_chart_5->setAlignment(Qt::AlignCenter);
        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(-1, 450, 1211, 41));
        frame_10->setFrameShape(QFrame::NoFrame);
        frame_10->setFrameShadow(QFrame::Sunken);
        frame_10->setLineWidth(0);
        frame_11 = new QFrame(frame_10);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(0, 0, 2131, 3));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        frame_11->setFrameShape(QFrame::NoFrame);
        frame_11->setFrameShadow(QFrame::Sunken);
        frame_11->setLineWidth(0);
        lbl_chart_5->raise();
        lbl_chart_4->raise();
        lbl_chart_3->raise();
        lbl_chart_2->raise();
        lbl_chart_1->raise();
        chart_1->raise();
        chart_2->raise();
        chart_3->raise();
        chart_4->raise();
        chart_5->raise();
        frame_10->raise();
        lbl_lable5 = new QLabel(tab_9);
        lbl_lable5->setObjectName(QString::fromUtf8("lbl_lable5"));
        lbl_lable5->setGeometry(QRect(1060, 480, 81, 20));
        lbl_lable5->setFont(font2);
        lbl_lable5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        lbl_lable5->setAlignment(Qt::AlignCenter);
        tabWidget_4->addTab(tab_9, QString());
        rate_box->raise();
        frame_3->raise();
        lbl_lable4->raise();
        lbl_lable2->raise();
        lbl_lable1->raise();
        lbl_lable3->raise();
        lbl_lable5->raise();
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        table_result = new QTableWidget(tab_12);
        table_result->setObjectName(QString::fromUtf8("table_result"));
        table_result->setGeometry(QRect(20, 20, 1251, 491));
        table_result->setFont(font10);
        table_result->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        table_result->setLineWidth(2);
        table_result->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_result->setTabKeyNavigation(false);
        table_result->setProperty("showDropIndicator", QVariant(false));
        table_result->setDragDropOverwriteMode(false);
        table_result->setSelectionMode(QAbstractItemView::NoSelection);
        table_result->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_result->setGridStyle(Qt::SolidLine);
        table_result->horizontalHeader()->setDefaultSectionSize(410);
        table_result->verticalHeader()->setDefaultSectionSize(93);
        tabWidget_4->addTab(tab_12, QString());
        tabWidget_3->addTab(tab_3, QString());
        progress_vote = new QProgressBar(tab_7);
        progress_vote->setObjectName(QString::fromUtf8("progress_vote"));
        progress_vote->setGeometry(QRect(370, 30, 231, 16));
        QFont font12;
        font12.setPointSize(9);
        font12.setBold(true);
        font12.setWeight(75);
        progress_vote->setFont(font12);
        progress_vote->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        progress_vote->setValue(0);
        btn_option_chart = new QPushButton(tab_7);
        btn_option_chart->setObjectName(QString::fromUtf8("btn_option_chart"));
        btn_option_chart->setGeometry(QRect(1120, 610, 83, 31));
        btn_option_table = new QPushButton(tab_7);
        btn_option_table->setObjectName(QString::fromUtf8("btn_option_table"));
        btn_option_table->setGeometry(QRect(1210, 610, 83, 31));
        btn_option_rate = new QPushButton(tab_7);
        btn_option_rate->setObjectName(QString::fromUtf8("btn_option_rate"));
        btn_option_rate->setGeometry(QRect(1030, 610, 83, 31));
        btn_option_rate->setStyleSheet(QString::fromUtf8(""));
        btn_option_quantity = new QPushButton(tab_7);
        btn_option_quantity->setObjectName(QString::fromUtf8("btn_option_quantity"));
        btn_option_quantity->setGeometry(QRect(940, 610, 83, 31));
        btn_option_quantity->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 581, 331));
        groupBox->setFont(font8);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        chm_joyx = new QCheckBox(groupBox);
        chm_joyx->setObjectName(QString::fromUtf8("chm_joyx"));
        chm_joyx->setGeometry(QRect(20, 30, 161, 20));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Sans Serif"));
        font13.setPointSize(10);
        font13.setBold(true);
        font13.setItalic(false);
        font13.setWeight(75);
        chm_joyx->setFont(font13);
        chm_joyx->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        chm_joyx->setChecked(true);
        chm_joyx->setAutoRepeat(false);
        chm_joyx->setTristate(false);
        chm_joyy = new QCheckBox(groupBox);
        chm_joyy->setObjectName(QString::fromUtf8("chm_joyy"));
        chm_joyy->setGeometry(QRect(20, 60, 161, 20));
        chm_joyy->setFont(font13);
        chm_joyy->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        chm_loop = new QCheckBox(groupBox);
        chm_loop->setObjectName(QString::fromUtf8("chm_loop"));
        chm_loop->setGeometry(QRect(210, 30, 161, 20));
        chm_loop->setFont(font13);
        chm_loop->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        txt_loop_value = new QTextEdit(groupBox);
        txt_loop_value->setObjectName(QString::fromUtf8("txt_loop_value"));
        txt_loop_value->setGeometry(QRect(450, 30, 104, 31));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(350, 32, 91, 16));
        label_19->setFont(font8);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 100, 151, 16));
        label_20->setFont(font8);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(290, 100, 151, 16));
        label_21->setFont(font8);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        txt_ip = new QTextEdit(groupBox);
        txt_ip->setObjectName(QString::fromUtf8("txt_ip"));
        txt_ip->setGeometry(QRect(170, 90, 104, 31));
        txt_port = new QTextEdit(groupBox);
        txt_port->setObjectName(QString::fromUtf8("txt_port"));
        txt_port->setGeometry(QRect(450, 90, 104, 31));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 150, 151, 16));
        label_22->setFont(font8);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 190, 151, 16));
        label_23->setFont(font8);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 230, 151, 16));
        label_24->setFont(font8);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_change_admin = new QPushButton(groupBox);
        btn_change_admin->setObjectName(QString::fromUtf8("btn_change_admin"));
        btn_change_admin->setGeometry(QRect(170, 260, 391, 25));
        btn_save = new QPushButton(groupBox);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(20, 290, 541, 25));
        txt_admin_pass = new QLineEdit(groupBox);
        txt_admin_pass->setObjectName(QString::fromUtf8("txt_admin_pass"));
        txt_admin_pass->setGeometry(QRect(170, 140, 391, 31));
        txt_admin_pass->setFont(font9);
        txt_admin_pass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_admin_pass->setEchoMode(QLineEdit::Password);
        txt_admin_pass->setAlignment(Qt::AlignCenter);
        txt_admin_new = new QLineEdit(groupBox);
        txt_admin_new->setObjectName(QString::fromUtf8("txt_admin_new"));
        txt_admin_new->setGeometry(QRect(170, 180, 391, 31));
        txt_admin_new->setFont(font9);
        txt_admin_new->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_admin_new->setEchoMode(QLineEdit::Password);
        txt_admin_new->setAlignment(Qt::AlignCenter);
        txt_admin_confirm = new QLineEdit(groupBox);
        txt_admin_confirm->setObjectName(QString::fromUtf8("txt_admin_confirm"));
        txt_admin_confirm->setGeometry(QRect(170, 220, 391, 31));
        txt_admin_confirm->setFont(font9);
        txt_admin_confirm->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_admin_confirm->setEchoMode(QLineEdit::Password);
        txt_admin_confirm->setAlignment(Qt::AlignCenter);
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(620, 20, 411, 331));
        groupBox_7->setFont(font8);
        groupBox_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(30, 30, 121, 16));
        cmb_serial1 = new QComboBox(groupBox_7);
        cmb_serial1->setObjectName(QString::fromUtf8("cmb_serial1"));
        cmb_serial1->setGeometry(QRect(30, 80, 361, 24));
        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 60, 121, 16));
        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(30, 110, 121, 16));
        txt_baudrate1 = new QTextEdit(groupBox_7);
        txt_baudrate1->setObjectName(QString::fromUtf8("txt_baudrate1"));
        txt_baudrate1->setGeometry(QRect(280, 110, 111, 31));
        line = new QFrame(groupBox_7);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(27, 150, 361, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_53 = new QLabel(groupBox_7);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(30, 170, 121, 16));
        label_54 = new QLabel(groupBox_7);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(30, 200, 121, 16));
        cmb_serial2 = new QComboBox(groupBox_7);
        cmb_serial2->setObjectName(QString::fromUtf8("cmb_serial2"));
        cmb_serial2->setGeometry(QRect(30, 220, 361, 24));
        txt_baudrate2 = new QTextEdit(groupBox_7);
        txt_baudrate2->setObjectName(QString::fromUtf8("txt_baudrate2"));
        txt_baudrate2->setGeometry(QRect(280, 250, 111, 31));
        label_55 = new QLabel(groupBox_7);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(30, 250, 121, 16));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        lst_log = new QListWidget(tab_5);
        lst_log->setObjectName(QString::fromUtf8("lst_log"));
        lst_log->setGeometry(QRect(40, 180, 631, 241));
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(670, 30, 351, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        lst_clients = new QListWidget(tab_5);
        lst_clients->setObjectName(QString::fromUtf8("lst_clients"));
        lst_clients->setGeometry(QRect(680, 60, 361, 361));
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 20, 631, 131));
        groupBox_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_refresh_all = new QPushButton(groupBox_4);
        btn_refresh_all->setObjectName(QString::fromUtf8("btn_refresh_all"));
        btn_refresh_all->setGeometry(QRect(540, 90, 81, 31));
        btn_refresh_all->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_35 = new QLabel(groupBox_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 20, 57, 14));
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_log_delete = new QPushButton(groupBox_4);
        btn_log_delete->setObjectName(QString::fromUtf8("btn_log_delete"));
        btn_log_delete->setGeometry(QRect(540, 40, 81, 31));
        btn_log_delete->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dt_from = new QDateTimeEdit(groupBox_4);
        dt_from->setObjectName(QString::fromUtf8("dt_from"));
        dt_from->setGeometry(QRect(10, 100, 171, 24));
        dt_from->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Sans Serif\";\n"
"color: rgb(0, 0, 0);"));
        txt_log_sender = new QTextEdit(groupBox_4);
        txt_log_sender->setObjectName(QString::fromUtf8("txt_log_sender"));
        txt_log_sender->setGeometry(QRect(10, 40, 191, 31));
        txt_log_sender->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_39 = new QLabel(groupBox_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(210, 20, 57, 14));
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_refresh = new QPushButton(groupBox_4);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));
        btn_refresh->setGeometry(QRect(330, 40, 91, 31));
        btn_refresh->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_42 = new QLabel(groupBox_4);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(10, 80, 191, 16));
        label_42->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dt_to = new QDateTimeEdit(groupBox_4);
        dt_to->setObjectName(QString::fromUtf8("dt_to"));
        dt_to->setGeometry(QRect(190, 100, 171, 24));
        dt_to->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Sans Serif\";\n"
"color: rgb(0, 0, 0);"));
        label_43 = new QLabel(groupBox_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(190, 80, 171, 16));
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        cmb_log_type = new QComboBox(groupBox_4);
        cmb_log_type->setObjectName(QString::fromUtf8("cmb_log_type"));
        cmb_log_type->setGeometry(QRect(210, 40, 111, 31));
        cmb_log_type->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_today = new QPushButton(groupBox_4);
        btn_today->setObjectName(QString::fromUtf8("btn_today"));
        btn_today->setGeometry(QRect(370, 101, 51, 21));
        btn_today->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_44 = new QLabel(tab_5);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(50, 160, 111, 16));
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_db_size = new QLabel(tab_5);
        lbl_db_size->setObjectName(QString::fromUtf8("lbl_db_size"));
        lbl_db_size->setGeometry(QRect(150, 160, 101, 16));
        lbl_db_size->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_46 = new QLabel(tab_5);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(250, 160, 111, 16));
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_storage = new QLabel(tab_5);
        lbl_storage->setObjectName(QString::fromUtf8("lbl_storage"));
        lbl_storage->setGeometry(QRect(340, 160, 101, 16));
        lbl_storage->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_48 = new QLabel(tab_5);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(440, 160, 111, 16));
        label_48->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_freespace = new QLabel(tab_5);
        lbl_freespace->setObjectName(QString::fromUtf8("lbl_freespace"));
        lbl_freespace->setGeometry(QRect(550, 160, 121, 16));
        lbl_freespace->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        frame = new QFrame(tab_6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(610, 180, 100, 100));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/new/images/Resource/Logo/core_logocore_main.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(485, 280, 351, 41));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 350, 351, 41));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setAlignment(Qt::AlignCenter);
        label_40 = new QLabel(tab_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(480, 320, 351, 41));
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_40->setFrameShadow(QFrame::Plain);
        label_40->setAlignment(Qt::AlignCenter);
        label_41 = new QLabel(tab_6);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(1250, 600, 61, 41));
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_41->setFrameShadow(QFrame::Plain);
        label_41->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_6, QString());
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 10, 32, 32));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/images/Resource/Logo/favicon.ico);"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 10, 571, 41));
        QFont font14;
        font14.setPointSize(16);
        label_5->setFont(font14);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_bar_info = new QLabel(centralwidget);
        txt_bar_info->setObjectName(QString::fromUtf8("txt_bar_info"));
        txt_bar_info->setGeometry(QRect(32, 700, 1301, 27));
        txt_bar_info->setFont(font);
        txt_bar_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(95, 95, 95);"));
        txt_bar_info->setFrameShape(QFrame::Box);
        txt_bar_info->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1357, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PGITIC Sound Core", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Monitoring", 0, QApplication::UnicodeUTF8));
        txt_Mmicnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        txt_Mtotalnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "Status :", 0, QApplication::UnicodeUTF8));
        txt_Mcamnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "DCU Connection :", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "MCU Connection :", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindow", "Recording Mode :", 0, QApplication::UnicodeUTF8));
        monitor_recording->setText(QApplication::translate("MainWindow", "YES", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindow", "USB Storage :", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindow", "Camera Model :", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("MainWindow", "Controller Model :", 0, QApplication::UnicodeUTF8));
        lbl_camera_model->setText(QApplication::translate("MainWindow", "<name>", 0, QApplication::UnicodeUTF8));
        lbl_controller_model->setText(QApplication::translate("MainWindow", "<name>", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("MainWindow", "Speaker Volume :", 0, QApplication::UnicodeUTF8));
        lbl_volume->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("MainWindow", "Camera Speed :", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("MainWindow", "VCU Connection :", 0, QApplication::UnicodeUTF8));
        lbl_volume_2->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Recording Folder", 0, QApplication::UnicodeUTF8));
        btn_playstart->setText(QString());
        btn_playstop->setText(QString());
        txt_recname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">out.mp3</p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_recstart->setText(QString());
        progressBar->setFormat(QApplication::translate("MainWindow", "%p%", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "File Information :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "USB Storage :", 0, QApplication::UnicodeUTF8));
        btn_recstop->setText(QString());
        label_47->setText(QApplication::translate("MainWindow", "Volume :", 0, QApplication::UnicodeUTF8));
        lbl_info->setText(QApplication::translate("MainWindow", "00:00:00", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Recording and Playback", 0, QApplication::UnicodeUTF8));
        cs5->setText(QString());
        cs2->setText(QString());
        cs6->setText(QString());
        cs3->setText(QString());
        cs1->setText(QString());
        cs4->setText(QString());
        sback->setText(QApplication::translate("MainWindow", "<", 0, QApplication::UnicodeUTF8));
        s4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        s1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        s6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        s8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        sclear->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        s3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        s2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        s5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        s0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        s7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        s9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        d1->setText(QString());
        d5->setText(QString());
        d3->setText(QString());
        d7->setText(QString());
        d2->setText(QString());
        d4->setText(QString());
        d6->setText(QString());
        d8->setText(QString());
        soff->setText(QApplication::translate("MainWindow", "Cancle", 0, QApplication::UnicodeUTF8));
        sok->setText(QApplication::translate("MainWindow", "Ok", 0, QApplication::UnicodeUTF8));
        sapreset->setText(QApplication::translate("MainWindow", "APreset", 0, QApplication::UnicodeUTF8));
        ssmic->setText(QApplication::translate("MainWindow", "S.Mic", 0, QApplication::UnicodeUTF8));
        smpreset->setText(QApplication::translate("MainWindow", "MPreset", 0, QApplication::UnicodeUTF8));
        shome->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        sshome->setText(QApplication::translate("MainWindow", "S.Home", 0, QApplication::UnicodeUTF8));
        txt_mode->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        txt_input->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Mode :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Input :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Set Camera :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Status :", 0, QApplication::UnicodeUTF8));
        txt_camnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        txt_totalnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        txt_micnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Settings :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Joystick :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "CAM. Model:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "CON. Model:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Connection :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Username :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Password :", 0, QApplication::UnicodeUTF8));
        btn_login->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        txt_password->setText(QString());
        txt_username->setText(QString());
        chm_remember->setText(QApplication::translate("MainWindow", "Remember Me", 0, QApplication::UnicodeUTF8));
        btn_logout->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
        lbl_slider4->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lbl_slider3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lbl_slider2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        lbl_slider1->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Camera Control DCU", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Michrophones Mode", 0, QApplication::UnicodeUTF8));
        rad_manual->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        rad_boss->setText(QApplication::translate("MainWindow", "BOSS", 0, QApplication::UnicodeUTF8));
        rad_fifo->setText(QApplication::translate("MainWindow", "FIFO", 0, QApplication::UnicodeUTF8));
        btn_mic_set->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "Maximum :", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Manual Mode", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "Status :", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "Mic. Number :", 0, QApplication::UnicodeUTF8));
        btn_manual_set->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "Michrophones", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Voting", 0, QApplication::UnicodeUTF8));
        btn_start_vote->setText(QApplication::translate("MainWindow", "Voting Finished !", 0, QApplication::UnicodeUTF8));
        btn_vote1->setText(QApplication::translate("MainWindow", "Yes / No", 0, QApplication::UnicodeUTF8));
        btn_vote2->setText(QApplication::translate("MainWindow", "1/2/3", 0, QApplication::UnicodeUTF8));
        btn_vote3->setText(QApplication::translate("MainWindow", "agree/disag./dint.", 0, QApplication::UnicodeUTF8));
        btn_show_clock->setText(QApplication::translate("MainWindow", "Show Clock", 0, QApplication::UnicodeUTF8));
        btn_show_chart->setText(QApplication::translate("MainWindow", "show Chart", 0, QApplication::UnicodeUTF8));
        btn_show_number->setText(QApplication::translate("MainWindow", "show Number", 0, QApplication::UnicodeUTF8));
        btn_show_text->setText(QApplication::translate("MainWindow", "show Text", 0, QApplication::UnicodeUTF8));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:36pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindow", "Option(s) :", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "Question Title :", 0, QApplication::UnicodeUTF8));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:36pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QApplication::translate("MainWindow", "Question(s)", 0, QApplication::UnicodeUTF8));
        lbl_lable4->setText(QApplication::translate("MainWindow", "Name 4", 0, QApplication::UnicodeUTF8));
        lbl_lable2->setText(QApplication::translate("MainWindow", "Name 2", 0, QApplication::UnicodeUTF8));
        lbl_lable1->setText(QApplication::translate("MainWindow", "Name 1", 0, QApplication::UnicodeUTF8));
        lbl_lable3->setText(QApplication::translate("MainWindow", "Name 3", 0, QApplication::UnicodeUTF8));
        lbl_chart_1->setText(QApplication::translate("MainWindow", "0 %", 0, QApplication::UnicodeUTF8));
        chart_1->setText(QString());
        chart_2->setText(QString());
        chart_3->setText(QString());
        chart_4->setText(QString());
        chart_5->setText(QString());
        lbl_chart_2->setText(QApplication::translate("MainWindow", "0 %", 0, QApplication::UnicodeUTF8));
        lbl_chart_3->setText(QApplication::translate("MainWindow", "0 %", 0, QApplication::UnicodeUTF8));
        lbl_chart_4->setText(QApplication::translate("MainWindow", "0 %", 0, QApplication::UnicodeUTF8));
        lbl_chart_5->setText(QApplication::translate("MainWindow", "0 %", 0, QApplication::UnicodeUTF8));
        lbl_lable5->setText(QApplication::translate("MainWindow", "Name 5", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("MainWindow", "Chart", 0, QApplication::UnicodeUTF8));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_12), QApplication::translate("MainWindow", "Table", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow", "Results", 0, QApplication::UnicodeUTF8));
        btn_option_chart->setText(QApplication::translate("MainWindow", "chart", 0, QApplication::UnicodeUTF8));
        btn_option_table->setText(QApplication::translate("MainWindow", "table", 0, QApplication::UnicodeUTF8));
        btn_option_rate->setText(QApplication::translate("MainWindow", "Rate", 0, QApplication::UnicodeUTF8));
        btn_option_quantity->setText(QApplication::translate("MainWindow", "Quantity", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Voting System", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "DCU Settings", 0, QApplication::UnicodeUTF8));
        chm_joyx->setText(QApplication::translate("MainWindow", "Joystic X reversed", 0, QApplication::UnicodeUTF8));
        chm_joyy->setText(QApplication::translate("MainWindow", "Joystic Y reversed", 0, QApplication::UnicodeUTF8));
        chm_loop->setText(QApplication::translate("MainWindow", "CMD Loop", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Value(ms) :", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Remote Server IP:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Remote Server Port:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Admin Password:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "New Password :", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Confirm Password :", 0, QApplication::UnicodeUTF8));
        btn_change_admin->setText(QApplication::translate("MainWindow", "Change", 0, QApplication::UnicodeUTF8));
        btn_save->setText(QApplication::translate("MainWindow", "Save Settings", 0, QApplication::UnicodeUTF8));
        txt_admin_pass->setText(QString());
        txt_admin_new->setText(QString());
        txt_admin_confirm->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "USB/Serial Settings", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "MCU Interface :", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Port Name :", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "Baud Rate :", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("MainWindow", "VCU Interface :", 0, QApplication::UnicodeUTF8));
        label_54->setText(QApplication::translate("MainWindow", "Port Name :", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("MainWindow", "Baud Rate :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "TCPServer : Connected Clients", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Log Settings", 0, QApplication::UnicodeUTF8));
        btn_refresh_all->setText(QApplication::translate("MainWindow", "Show All", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindow", "Sender :", 0, QApplication::UnicodeUTF8));
        btn_log_delete->setText(QApplication::translate("MainWindow", "Delete All", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindow", "Type:", 0, QApplication::UnicodeUTF8));
        btn_refresh->setText(QApplication::translate("MainWindow", "Filter", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindow", "From:", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindow", "To:", 0, QApplication::UnicodeUTF8));
        cmb_log_type->clear();
        cmb_log_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "INFO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "WARN", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ERROR", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "DEBUG", 0, QApplication::UnicodeUTF8)
        );
        btn_today->setText(QApplication::translate("MainWindow", "Today", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindow", "Database Size :", 0, QApplication::UnicodeUTF8));
        lbl_db_size->setText(QApplication::translate("MainWindow", "0 Kb", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("MainWindow", "Storage Size :", 0, QApplication::UnicodeUTF8));
        lbl_storage->setText(QApplication::translate("MainWindow", "0 Kb", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("MainWindow", "Free Space Size :", 0, QApplication::UnicodeUTF8));
        lbl_freespace->setText(QApplication::translate("MainWindow", "0 Kb", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "LOG Engine", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "www.pgitic.com", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "PGITIC Co. 2005-2016 All Rights Reserved", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindow", "Advanced Conference Managment System", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindow", "v 1.0.0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "PGITIC - Advanced Conference Managment System", 0, QApplication::UnicodeUTF8));
        txt_bar_info->setText(QApplication::translate("MainWindow", "Ready", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
