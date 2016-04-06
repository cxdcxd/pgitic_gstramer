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

CONFIG += mobility
MOBILITY = multimedia

LIBS += -L/usr/lib -lQtMultimediaKit
LIBS += -L/usr/local/lib -lwiringPi
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgstreamer-0.10
LIBS += -L/usr/lib/arm-linux-gnueabihf -lgobject-2.0
LIBS += -L/usr/lib/arm-linux-gnueabihf -lglib-2.0

QT       += core
QT       += network
QT       += MOBILITY

QT       -= gui

TARGET = main
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    audioout.cpp \
    audioin.cpp \
    mygpio.cpp \
    qthreadtcp.cpp \
    sigwatch.cpp \
    statics.cpp \
    mythreadgclient.cpp \
    mythreadgserver.cpp \
    mygserver.cpp \
    mygclient.cpp

HEADERS += \
    audioout.h \
    audioin.h \
    mygpio.h \
    qthreadtcp.h \
    sigwatch.h \
    statics.h \
    mythreadgclient.h \
    mythreadgserver.h \
    mygserver.h \
    mygclient.h
