#-------------------------------------------------
#
# Project created by QtCreator 2015-04-18T06:13:45
#
#-------------------------------------------------

INCLUDEPATH += /usr/include/libxml2/
INCLUDEPATH += /usr/lib/arm-linux-gnueabihf/glib-2.0/include
INCLUDEPATH += /usr/include/glib-2.0
INCLUDEPATH += /usr/include/gstreamer-0.10
INCLUDEPATH += /usr/include/QtMobility
INCLUDEPATH += /usr/include/QtMultimediaKit
INCLUDEPATH += /usr/include/boost
INCLUDEPATH += /usr/include/qwt-qt4

LIBS += -L/usr/local/lib -lwiringPi
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgstreamer-0.10
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgobject-2.0
LIBS += -L/usr/lib/arm-linux-gnueabihf -lglib-2.0
LIBS += -L/usr/lib/ -lboost_system -lboost_serialization -lboost_filesystem
LIBS += -L/usr/lib/ -lqwt-qt4

QT       += core
QT       += network
QT       += gui
QT       += serialport
QT       += sql

TARGET = main
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mygpio.cpp \
    qthreadtcp.cpp \
    sigwatch.cpp \
    statics.cpp \
    mainthread.cpp \
    mygclientplay.cpp \
    mygclientrecord.cpp \
    mythreadgclientplay.cpp \
    mythreadgclientrecord.cpp \
    mainwindow.cpp \
    myserver.cpp \
    mytcpsocket.cpp \
    pgiticlog.cpp \
    joystickscene.cpp \
    serialthread.cpp \
    aes.cpp \
    volumethread.cpp

HEADERS += \
    mygpio.h \
    qthreadtcp.h \
    sigwatch.h \
    statics.h \
    mainthread.h \
    mygclientplay.h \
    mygclientrecord.h \
    mythreadgclientplay.h \
    mythreadgclientrecord.h \
    mainwindow.h \
    myserver.h \
    mytcpsocket.h \
    pgiticlog.h \
    joystickscene.h \
    serialthread.h \
    aes.h \
    volumethread.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    assets.qrc
