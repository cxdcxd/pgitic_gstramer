/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 13 11:48:43 2016
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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QPushButton *btn_playstart;
    QPushButton *btn_playstop;
    QTextEdit *txt_recname;
    QPushButton *btn_recstart;
    QTextEdit *txt_info;
    QProgressBar *progressBar;
    QFrame *img_usbstorage1;
    QLabel *label_3;
    QLabel *label_8;
    QFrame *img_usbstorage0;
    QListWidget *lst_folder_info;
    QPushButton *btn_recstop;
    QPushButton *btn_playpause;
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
    QSlider *slider4;
    QSlider *slider3;
    QSlider *slider1;
    QSlider *slider2;
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
    QWidget *tab_7;
    QWidget *tab_4;
    QWidget *tab_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QListView *lst_folder_2;
    QWidget *tab_9;
    QWidget *tab_3;
    QWidget *tab_5;
    QTableView *logtable;
    QWidget *tab_6;
    QFrame *frame;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *frame_2;
    QLabel *label_5;
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
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #1a71d7,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #1a71d7;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
""
                        "}"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 70, 1321, 671));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 351, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        btn_playstart = new QPushButton(tab);
        btn_playstart->setObjectName(QString::fromUtf8("btn_playstart"));
        btn_playstart->setGeometry(QRect(450, 50, 71, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/images/Resource/Play/x1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playstart->setIcon(icon);
        btn_playstart->setIconSize(QSize(32, 32));
        btn_playstart->setCheckable(false);
        btn_playstop = new QPushButton(tab);
        btn_playstop->setObjectName(QString::fromUtf8("btn_playstop"));
        btn_playstop->setGeometry(QRect(530, 50, 71, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/images/Resource/Play/x3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playstop->setIcon(icon1);
        btn_playstop->setIconSize(QSize(32, 32));
        txt_recname = new QTextEdit(tab);
        txt_recname->setObjectName(QString::fromUtf8("txt_recname"));
        txt_recname->setGeometry(QRect(370, 150, 491, 31));
        txt_recname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_recstart = new QPushButton(tab);
        btn_recstart->setObjectName(QString::fromUtf8("btn_recstart"));
        btn_recstart->setGeometry(QRect(370, 50, 71, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/images/Resource/Play/x10.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_recstart->setIcon(icon2);
        btn_recstart->setIconSize(QSize(32, 32));
        txt_info = new QTextEdit(tab);
        txt_info->setObjectName(QString::fromUtf8("txt_info"));
        txt_info->setGeometry(QRect(610, 50, 251, 41));
        QFont font;
        font.setPointSize(12);
        txt_info->setFont(font);
        txt_info->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txt_info->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lst_folder_info->setFont(font1);
        btn_recstop = new QPushButton(tab);
        btn_recstop->setObjectName(QString::fromUtf8("btn_recstop"));
        btn_recstop->setGeometry(QRect(370, 50, 71, 41));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/images/Resource/Play/x2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_recstop->setIcon(icon3);
        btn_recstop->setIconSize(QSize(32, 32));
        btn_playpause = new QPushButton(tab);
        btn_playpause->setObjectName(QString::fromUtf8("btn_playpause"));
        btn_playpause->setGeometry(QRect(450, 50, 71, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/images/Resource/Play/x4.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_playpause->setIcon(icon4);
        btn_playpause->setIconSize(QSize(32, 32));
        btn_playpause->setCheckable(false);
        tabWidget->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_2 = new QTabWidget(tab_8);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 20, 1291, 611));
        tabWidget_2->setTabPosition(QTabWidget::South);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tabWidget_2->setElideMode(Qt::ElideMiddle);
        tabWidget_2->setUsesScrollButtons(false);
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        frame_5 = new QFrame(tab_10);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(220, 20, 60, 60));
        frame_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Dcu/dcuconnect.png)  0 0 0 0 100 stretch;\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        cs5 = new QPushButton(tab_10);
        cs5->setObjectName(QString::fromUtf8("cs5"));
        cs5->setGeometry(QRect(960, 30, 60, 60));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam5_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs5->setIcon(icon5);
        cs5->setIconSize(QSize(50, 50));
        cs2 = new QPushButton(tab_10);
        cs2->setObjectName(QString::fromUtf8("cs2"));
        cs2->setGeometry(QRect(750, 30, 60, 60));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam2_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs2->setIcon(icon6);
        cs2->setIconSize(QSize(50, 50));
        cs6 = new QPushButton(tab_10);
        cs6->setObjectName(QString::fromUtf8("cs6"));
        cs6->setGeometry(QRect(1030, 30, 60, 60));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam6_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs6->setIcon(icon7);
        cs6->setIconSize(QSize(50, 50));
        cs3 = new QPushButton(tab_10);
        cs3->setObjectName(QString::fromUtf8("cs3"));
        cs3->setGeometry(QRect(820, 30, 60, 60));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam3_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs3->setIcon(icon8);
        cs3->setIconSize(QSize(50, 50));
        cs1 = new QPushButton(tab_10);
        cs1->setObjectName(QString::fromUtf8("cs1"));
        cs1->setGeometry(QRect(680, 30, 60, 60));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam1_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs1->setIcon(icon9);
        cs1->setIconSize(QSize(50, 50));
        cs4 = new QPushButton(tab_10);
        cs4->setObjectName(QString::fromUtf8("cs4"));
        cs4->setGeometry(QRect(890, 30, 60, 60));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/images/Resource/Dcu/dcu_cam4_0.png"), QSize(), QIcon::Normal, QIcon::Off);
        cs4->setIcon(icon10);
        cs4->setIconSize(QSize(50, 50));
        frame_4 = new QFrame(tab_10);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(340, 20, 60, 60));
        frame_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Dcu/dcu_micpanasonic.png)  0 0 0 0 100 stretch;\n"
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        sback->setFont(font2);
        sback->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sback->setIconSize(QSize(12, 12));
        sback->setFlat(false);
        s4 = new QPushButton(tab_10);
        s4->setObjectName(QString::fromUtf8("s4"));
        s4->setGeometry(QRect(40, 270, 50, 50));
        s4->setFont(font2);
        s4->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s4->setIconSize(QSize(12, 12));
        s4->setFlat(false);
        s1 = new QPushButton(tab_10);
        s1->setObjectName(QString::fromUtf8("s1"));
        s1->setGeometry(QRect(40, 210, 50, 50));
        s1->setFont(font2);
        s1->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s1->setIconSize(QSize(12, 12));
        s1->setFlat(false);
        s6 = new QPushButton(tab_10);
        s6->setObjectName(QString::fromUtf8("s6"));
        s6->setGeometry(QRect(160, 270, 50, 50));
        s6->setFont(font2);
        s6->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s6->setIconSize(QSize(12, 12));
        s6->setFlat(false);
        s8 = new QPushButton(tab_10);
        s8->setObjectName(QString::fromUtf8("s8"));
        s8->setGeometry(QRect(100, 330, 50, 50));
        s8->setFont(font2);
        s8->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s8->setIconSize(QSize(12, 12));
        s8->setFlat(false);
        sclear = new QPushButton(tab_10);
        sclear->setObjectName(QString::fromUtf8("sclear"));
        sclear->setGeometry(QRect(40, 390, 50, 50));
        sclear->setFont(font2);
        sclear->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sclear->setIconSize(QSize(12, 12));
        sclear->setFlat(false);
        s3 = new QPushButton(tab_10);
        s3->setObjectName(QString::fromUtf8("s3"));
        s3->setGeometry(QRect(160, 210, 50, 50));
        s3->setFont(font2);
        s3->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s3->setIconSize(QSize(12, 12));
        s3->setFlat(false);
        s2 = new QPushButton(tab_10);
        s2->setObjectName(QString::fromUtf8("s2"));
        s2->setGeometry(QRect(100, 210, 50, 50));
        s2->setFont(font2);
        s2->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s2->setIconSize(QSize(12, 12));
        s2->setFlat(false);
        s5 = new QPushButton(tab_10);
        s5->setObjectName(QString::fromUtf8("s5"));
        s5->setGeometry(QRect(100, 270, 50, 50));
        s5->setFont(font2);
        s5->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s5->setIconSize(QSize(12, 12));
        s5->setFlat(false);
        s0 = new QPushButton(tab_10);
        s0->setObjectName(QString::fromUtf8("s0"));
        s0->setGeometry(QRect(100, 390, 50, 50));
        s0->setFont(font2);
        s0->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s0->setIconSize(QSize(12, 12));
        s0->setFlat(false);
        s7 = new QPushButton(tab_10);
        s7->setObjectName(QString::fromUtf8("s7"));
        s7->setGeometry(QRect(40, 330, 50, 50));
        s7->setFont(font2);
        s7->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s7->setIconSize(QSize(12, 12));
        s7->setFlat(false);
        s9 = new QPushButton(tab_10);
        s9->setObjectName(QString::fromUtf8("s9"));
        s9->setGeometry(QRect(160, 330, 50, 50));
        s9->setFont(font2);
        s9->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        s9->setIconSize(QSize(12, 12));
        s9->setFlat(false);
        d1 = new QPushButton(tab_10);
        d1->setObjectName(QString::fromUtf8("d1"));
        d1->setGeometry(QRect(1080, 250, 75, 75));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/images/Resource/arrow/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        d1->setIcon(icon11);
        d5 = new QPushButton(tab_10);
        d5->setObjectName(QString::fromUtf8("d5"));
        d5->setGeometry(QRect(1080, 410, 75, 75));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/images/Resource/arrow/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        d5->setIcon(icon12);
        d3 = new QPushButton(tab_10);
        d3->setObjectName(QString::fromUtf8("d3"));
        d3->setGeometry(QRect(1160, 330, 75, 75));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/images/Resource/arrow/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        d3->setIcon(icon13);
        d7 = new QPushButton(tab_10);
        d7->setObjectName(QString::fromUtf8("d7"));
        d7->setGeometry(QRect(1000, 330, 75, 75));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/images/Resource/arrow/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        d7->setIcon(icon14);
        d2 = new QPushButton(tab_10);
        d2->setObjectName(QString::fromUtf8("d2"));
        d2->setGeometry(QRect(1160, 250, 75, 75));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u2.png"), QSize(), QIcon::Normal, QIcon::Off);
        d2->setIcon(icon15);
        d4 = new QPushButton(tab_10);
        d4->setObjectName(QString::fromUtf8("d4"));
        d4->setGeometry(QRect(1160, 410, 75, 75));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u3.png"), QSize(), QIcon::Normal, QIcon::Off);
        d4->setIcon(icon16);
        d6 = new QPushButton(tab_10);
        d6->setObjectName(QString::fromUtf8("d6"));
        d6->setGeometry(QRect(1000, 410, 75, 75));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u4.png"), QSize(), QIcon::Normal, QIcon::Off);
        d6->setIcon(icon17);
        d8 = new QPushButton(tab_10);
        d8->setObjectName(QString::fromUtf8("d8"));
        d8->setGeometry(QRect(1000, 250, 75, 75));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/images/Resource/arrow/u1.png"), QSize(), QIcon::Normal, QIcon::Off);
        d8->setIcon(icon18);
        graphicsView = new QGraphicsView(tab_10);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(443, 209, 501, 291));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/images/Resource/Dcu/control3.png) 0 0 0 0 100 stretch;\n"
"\n"
""));
        slider4 = new QSlider(tab_10);
        slider4->setObjectName(QString::fromUtf8("slider4"));
        slider4->setGeometry(QRect(821, 248, 16, 221));
        slider4->setOrientation(Qt::Vertical);
        slider3 = new QSlider(tab_10);
        slider3->setObjectName(QString::fromUtf8("slider3"));
        slider3->setGeometry(QRect(728, 248, 16, 221));
        slider3->setOrientation(Qt::Vertical);
        slider1 = new QSlider(tab_10);
        slider1->setObjectName(QString::fromUtf8("slider1"));
        slider1->setGeometry(QRect(540, 248, 16, 221));
        slider1->setOrientation(Qt::Vertical);
        slider2 = new QSlider(tab_10);
        slider2->setObjectName(QString::fromUtf8("slider2"));
        slider2->setGeometry(QRect(634, 248, 16, 221));
        slider2->setOrientation(Qt::Vertical);
        soff = new QPushButton(tab_10);
        soff->setObjectName(QString::fromUtf8("soff"));
        soff->setGeometry(QRect(40, 450, 170, 50));
        soff->setFont(font2);
        soff->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        soff->setIconSize(QSize(12, 12));
        soff->setFlat(false);
        sok = new QPushButton(tab_10);
        sok->setObjectName(QString::fromUtf8("sok"));
        sok->setGeometry(QRect(220, 450, 191, 50));
        sok->setFont(font2);
        sok->setStyleSheet(QString::fromUtf8("font: 18pt \"Sans Serif\";"));
        sok->setIconSize(QSize(12, 12));
        sok->setFlat(false);
        sapreset = new QPushButton(tab_10);
        sapreset->setObjectName(QString::fromUtf8("sapreset"));
        sapreset->setGeometry(QRect(220, 210, 91, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans Serif"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        sapreset->setFont(font3);
        sapreset->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        sapreset->setIconSize(QSize(12, 12));
        sapreset->setFlat(false);
        ssmic = new QPushButton(tab_10);
        ssmic->setObjectName(QString::fromUtf8("ssmic"));
        ssmic->setGeometry(QRect(220, 270, 191, 51));
        ssmic->setFont(font3);
        ssmic->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        ssmic->setIconSize(QSize(12, 12));
        ssmic->setFlat(false);
        smpreset = new QPushButton(tab_10);
        smpreset->setObjectName(QString::fromUtf8("smpreset"));
        smpreset->setGeometry(QRect(320, 210, 91, 51));
        smpreset->setFont(font3);
        smpreset->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        smpreset->setIconSize(QSize(12, 12));
        smpreset->setFlat(false);
        shome = new QPushButton(tab_10);
        shome->setObjectName(QString::fromUtf8("shome"));
        shome->setGeometry(QRect(320, 330, 91, 51));
        shome->setFont(font3);
        shome->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        shome->setIconSize(QSize(12, 12));
        shome->setFlat(false);
        sshome = new QPushButton(tab_10);
        sshome->setObjectName(QString::fromUtf8("sshome"));
        sshome->setGeometry(QRect(220, 330, 91, 51));
        sshome->setFont(font3);
        sshome->setStyleSheet(QString::fromUtf8("font: 14pt \"Sans Serif\";"));
        sshome->setIconSize(QSize(12, 12));
        sshome->setFlat(false);
        txt_mode = new QTextEdit(tab_10);
        txt_mode->setObjectName(QString::fromUtf8("txt_mode"));
        txt_mode->setGeometry(QRect(40, 150, 171, 41));
        txt_input = new QTextEdit(tab_10);
        txt_input->setObjectName(QString::fromUtf8("txt_input"));
        txt_input->setGeometry(QRect(220, 150, 191, 41));
        label_10 = new QLabel(tab_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 130, 57, 14));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11 = new QLabel(tab_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 130, 57, 14));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_10);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 50, 81, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_6 = new QFrame(tab_10);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(100, 20, 60, 60));
        frame_6->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/dcu_SCAM.png)  0 0 0 0 100 stretch;\n"
""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        status = new QFrame(tab_10);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(1220, 50, 31, 31));
        status->setStyleSheet(QString::fromUtf8("border-image: \n"
"url(:/new/images/Resource/Dcu/wific1.png)  0 0 0 0 100 stretch;\n"
""));
        status->setFrameShape(QFrame::StyledPanel);
        status->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(tab_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 40, 51, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_camnum = new QLabel(tab_10);
        txt_camnum->setObjectName(QString::fromUtf8("txt_camnum"));
        txt_camnum->setGeometry(QRect(180, 60, 21, 16));
        txt_camnum->setFont(font1);
        txt_camnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_totalnum = new QLabel(tab_10);
        txt_totalnum->setObjectName(QString::fromUtf8("txt_totalnum"));
        txt_totalnum->setGeometry(QRect(300, 60, 21, 16));
        txt_totalnum->setFont(font1);
        txt_totalnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        txt_micnum = new QLabel(tab_10);
        txt_micnum->setObjectName(QString::fromUtf8("txt_micnum"));
        txt_micnum->setGeometry(QRect(420, 60, 21, 16));
        txt_micnum->setFont(font1);
        txt_micnum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_17 = new QLabel(tab_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(460, 180, 91, 16));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(tab_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(1000, 180, 91, 16));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        smodel = new QComboBox(tab_10);
        smodel->setObjectName(QString::fromUtf8("smodel"));
        smodel->setGeometry(QRect(320, 410, 91, 31));
        cmodel = new QComboBox(tab_10);
        cmodel->setObjectName(QString::fromUtf8("cmodel"));
        cmodel->setGeometry(QRect(220, 410, 91, 31));
        label = new QLabel(tab_10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 390, 91, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 390, 91, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_10);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(1130, 50, 81, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_10, QString());
        graphicsView->raise();
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
        slider4->raise();
        slider3->raise();
        slider1->raise();
        slider2->raise();
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
        status->raise();
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
        label_14->raise();
        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 340, 221, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 40, 351, 21));
        label_4->setAlignment(Qt::AlignCenter);
        lst_folder_2 = new QListView(tab_2);
        lst_folder_2->setObjectName(QString::fromUtf8("lst_folder_2"));
        lst_folder_2->setGeometry(QRect(20, 70, 371, 331));
        tabWidget->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        logtable = new QTableView(tab_5);
        logtable->setObjectName(QString::fromUtf8("logtable"));
        logtable->setGeometry(QRect(40, 80, 501, 192));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        frame = new QFrame(tab_6);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 100, 100));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/new/images/Resource/Logo/core_logocore_main.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 30, 351, 41));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 80, 351, 41));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setAlignment(Qt::AlignCenter);
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
        label_5->setGeometry(QRect(60, 10, 481, 41));
        QFont font4;
        font4.setPointSize(16);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1357, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PGITIC Sound Core", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Recording Folder", 0, QApplication::UnicodeUTF8));
        btn_playstart->setText(QString());
        btn_playstop->setText(QString());
        txt_recname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">out.mp3</p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_recstart->setText(QString());
        txt_info->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">00:00:00</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\"><br /></span></p></body></html>", 0, QApplication::UnicodeUTF8));
        progressBar->setFormat(QApplication::translate("MainWindow", "%p%", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "File Information :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "USB Storage :", 0, QApplication::UnicodeUTF8));
        btn_recstop->setText(QString());
        btn_playpause->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Recording And Playback", 0, QApplication::UnicodeUTF8));
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
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        txt_input->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Mode :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Input :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Set Camera :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Status :", 0, QApplication::UnicodeUTF8));
        txt_camnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        txt_totalnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        txt_micnum->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Settings :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Joystick :", 0, QApplication::UnicodeUTF8));
        smodel->clear();
        smodel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Panasonic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sony", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Bosch", 0, QApplication::UnicodeUTF8)
        );
        cmodel->clear();
        cmodel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Model 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Model 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Model 3", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "CAM. Model:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "CON. Model:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Connection :", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Camera Control DCU", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "Voting", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "TCP Sendt Test", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Connected Clients", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "TCP/IP Server", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "TCP/IP Client", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "USB/Serial Communication", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "LOG Engine", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "www.pgitic.com", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "PGITIC Co. 2005-2016 All Rights Reserved", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "PGITIC - Audio Manager v 0.1.0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
