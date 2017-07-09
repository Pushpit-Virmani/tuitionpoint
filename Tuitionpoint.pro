#-------------------------------------------------
#
# Project created by QtCreator 2017-06-20T17:49:22
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tuitionpoint
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        dialog.cpp \
    signin.cpp \
    register.cpp \
    studenthome.cpp \
    teacherhome.cpp \
    shome.cpp \
    ti.cpp \
    stuinfo.cpp \
    lastone.cpp

HEADERS  += dialog.h \
    signin.h \
    register.h \
    studenthome.h \
    teacherhome.h \
    shome.h \
    ti.h \
    stuinfo.h \
    lastone.h

FORMS    += dialog.ui \
    signin.ui \
    register.ui \
    studenthome.ui \
    teacherhome.ui \
    shome.ui \
    ti.ui \
    stuinfo.ui \
    lastone.ui

CONFIG += mobility
MOBILITY = 

