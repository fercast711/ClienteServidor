#-------------------------------------------------
#
# Project created by QtCreator 2022-11-28T16:58:08
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cliente
TEMPLATE = app
CONFIG += C++11

SOURCES += main.cpp\
        cliente.cpp \
    conexion.cpp

HEADERS  += cliente.h \
    conexion.h

FORMS    += cliente.ui \
    conexion.ui
