/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 27 12:19:20 2016
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_59;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_60;
    QLabel *label_56;
    QLabel *label_61;
    QLabel *lbl_HID;
    QPushButton *pushButton;
    QCheckBox *chk1;
    QCheckBox *chk2;
    QCheckBox *chk3;
    QCheckBox *chk4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(554, 304);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_59 = new QLabel(centralWidget);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(240, 140, 101, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_59->setFont(font);
        label_59->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_59->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(centralWidget);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(10, 120, 131, 16));
        QFont font1;
        font1.setPointSize(11);
        label_57->setFont(font1);
        label_57->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_58 = new QLabel(centralWidget);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(140, 140, 71, 16));
        label_58->setFont(font);
        label_58->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_58->setAlignment(Qt::AlignCenter);
        label_60 = new QLabel(centralWidget);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(360, 140, 71, 16));
        label_60->setFont(font);
        label_60->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_60->setAlignment(Qt::AlignCenter);
        label_56 = new QLabel(centralWidget);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(10, 30, 131, 16));
        label_56->setFont(font1);
        label_56->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_61 = new QLabel(centralWidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(460, 140, 71, 16));
        label_61->setFont(font);
        label_61->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        label_61->setAlignment(Qt::AlignCenter);
        lbl_HID = new QLabel(centralWidget);
        lbl_HID->setObjectName(QString::fromUtf8("lbl_HID"));
        lbl_HID->setGeometry(QRect(140, 30, 391, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_HID->setFont(font2);
        lbl_HID->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);"));
        lbl_HID->setFrameShape(QFrame::Box);
        lbl_HID->setFrameShadow(QFrame::Sunken);
        lbl_HID->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(302, 190, 221, 51));
        chk1 = new QCheckBox(centralWidget);
        chk1->setObjectName(QString::fromUtf8("chk1"));
        chk1->setGeometry(QRect(160, 100, 31, 31));
        chk2 = new QCheckBox(centralWidget);
        chk2->setObjectName(QString::fromUtf8("chk2"));
        chk2->setGeometry(QRect(280, 100, 31, 31));
        chk3 = new QCheckBox(centralWidget);
        chk3->setObjectName(QString::fromUtf8("chk3"));
        chk3->setGeometry(QRect(390, 100, 31, 31));
        chk4 = new QCheckBox(centralWidget);
        chk4->setObjectName(QString::fromUtf8("chk4"));
        chk4->setGeometry(QRect(480, 100, 31, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 554, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("MainWindow", "Microphones", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("MainWindow", "License :", 0, QApplication::UnicodeUTF8));
        label_58->setText(QApplication::translate("MainWindow", "Record", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("MainWindow", "DCU", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("MainWindow", "Hardware ID :", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("MainWindow", "Voting", 0, QApplication::UnicodeUTF8));
        lbl_HID->setText(QApplication::translate("MainWindow", "<name>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Generate License for device", 0, QApplication::UnicodeUTF8));
        chk1->setText(QString());
        chk2->setText(QString());
        chk3->setText(QString());
        chk4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
