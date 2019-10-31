#-------------------------------------------------
#
# Project created by QtCreator 2019-10-09T15:40:10
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InstantMessaging
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    interface.cpp

HEADERS  += mainwindow.h \
    login.h \
    interface.h

FORMS    += mainwindow.ui \
    login.ui \
    interface.ui

RESOURCES += \
    image.qrc \
    image.qrc
