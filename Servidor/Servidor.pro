#-------------------------------------------------
#
# Project created by QtCreator 2022-11-29T19:59:40
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Servidor
TEMPLATE = app
CONFIG += C++11

SOURCES += main.cpp\
        servidor.cpp \
    equipos.cpp \
    encuentros.cpp \
    configuracion.cpp \
    mantenimientoequi.cpp \
    mantenimientopartidos.cpp

HEADERS  += servidor.h \
    equipos.h \
    encuentros.h \
    configuracion.h \
    mantenimientoequi.h \
    mantenimientopartidos.h

FORMS    += servidor.ui \
    configuracion.ui \
    mantenimientoequi.ui \
    mantenimientopartidos.ui
