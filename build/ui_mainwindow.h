/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Apr 7 08:13:08 2016
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *txt_playname;
    QPushButton *btn_playstop;
    QLabel *label;
    QPushButton *btn_playstart;
    QLabel *label_2;
    QListView *lst_folder;
    QPushButton *btn_recstop;
    QTextEdit *txt_recname;
    QPushButton *btn_recstart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(507, 452);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_playname = new QTextEdit(centralwidget);
        txt_playname->setObjectName(QString::fromUtf8("txt_playname"));
        txt_playname->setGeometry(QRect(320, 120, 161, 31));
        btn_playstop = new QPushButton(centralwidget);
        btn_playstop->setObjectName(QString::fromUtf8("btn_playstop"));
        btn_playstop->setGeometry(QRect(170, 110, 131, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 451, 21));
        label->setAlignment(Qt::AlignCenter);
        btn_playstart = new QPushButton(centralwidget);
        btn_playstart->setObjectName(QString::fromUtf8("btn_playstart"));
        btn_playstart->setGeometry(QRect(30, 110, 131, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 170, 451, 21));
        label_2->setAlignment(Qt::AlignCenter);
        lst_folder = new QListView(centralwidget);
        lst_folder->setObjectName(QString::fromUtf8("lst_folder"));
        lst_folder->setGeometry(QRect(30, 200, 451, 192));
        btn_recstop = new QPushButton(centralwidget);
        btn_recstop->setObjectName(QString::fromUtf8("btn_recstop"));
        btn_recstop->setGeometry(QRect(170, 50, 131, 51));
        txt_recname = new QTextEdit(centralwidget);
        txt_recname->setObjectName(QString::fromUtf8("txt_recname"));
        txt_recname->setGeometry(QRect(320, 60, 161, 31));
        btn_recstart = new QPushButton(centralwidget);
        btn_recstart->setObjectName(QString::fromUtf8("btn_recstart"));
        btn_recstart->setGeometry(QRect(30, 50, 131, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 507, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        txt_playname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">out.mp3</p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_playstop->setText(QApplication::translate("MainWindow", "Play Stop", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "PGITIC - Recording & Playback Version 1.0", 0, QApplication::UnicodeUTF8));
        btn_playstart->setText(QApplication::translate("MainWindow", "Play Start", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Recording Folder", 0, QApplication::UnicodeUTF8));
        btn_recstop->setText(QApplication::translate("MainWindow", "Record Stop", 0, QApplication::UnicodeUTF8));
        txt_recname->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">out.mp3</p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_recstart->setText(QApplication::translate("MainWindow", "Record Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
