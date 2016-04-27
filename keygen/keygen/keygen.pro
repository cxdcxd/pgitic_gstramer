#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T10:31:41
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = keygen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aes.cpp

HEADERS  += mainwindow.h \
    aes.h

FORMS    += mainwindow.ui
