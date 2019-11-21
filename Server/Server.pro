#-------------------------------------------------
#
# Project created by QtCreator 2019-10-14T14:42:36
#
#-------------------------------------------------

QT       += core gui network

QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h \
    connection.h

FORMS    += server.ui
