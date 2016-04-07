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

LIBS += -L/usr/local/lib -lwiringPi
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgstreamer-0.10
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgobject-2.0
LIBS += -L/usr/lib/arm-linux-gnueabihf -lglib-2.0

QT       += core
QT       += network
QT       += gui

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
    mainwindow.cpp

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
    mainwindow.h

FORMS += \
    mainwindow.ui
