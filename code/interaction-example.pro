#-------------------------------------------------
#
# Project created by QtCreator 2012-03-04T23:24:55
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = interaction-example
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
         ../../qcustomplot.cpp \
    adcdialog.cpp \
    tiny6410dialog.cpp

HEADERS  += mainwindow.h \
         ../../qcustomplot.h \
    adcdialog.h \
    tiny6410dialog.h

FORMS    += mainwindow.ui \
    adcdialog.ui \
    tiny6410dialog.ui

