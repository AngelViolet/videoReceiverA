#-------------------------------------------------
#
# Project created by QtCreator 2016-07-07T09:12:45
#
#-------------------------------------------------

QT       += core gui
QT         += network
#QT      += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = videoReceiver2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sample.cpp

HEADERS  += mainwindow.h \
    sample.h

FORMS    += mainwindow.ui \
    sample.ui

INCLUDEPATH += /usr/local/include/opencv
INCLUDEPATH += /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_*
