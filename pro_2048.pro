#-------------------------------------------------
#
# Project created by QtCreator 2015-05-17T20:33:46
#
#-------------------------------------------------

QT       += core gui\
            multimedia\
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pro_2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    rank.cpp

HEADERS  += mainwindow.h \
    game.h \
    rank.h

FORMS    +=

RESOURCES += \
    resource.qrc
