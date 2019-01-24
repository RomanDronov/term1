#-------------------------------------------------
#
# Project created by QtCreator 2017-05-13T05:41:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = term_project
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
        mainwindow.cpp \
    airport.cpp \
    data.cpp \
    aircaft_factory.cpp \
    craft.cpp \
    start_window.cpp \
    helicopter_factory.cpp

HEADERS  += mainwindow.h \
    data.h \
    airport.h \
    crafts.h \
    aircraft.h \
    craft_factory.h \
    aircraft_factory.h \
    start_window.h \
    helicopter.h \
    helicopter_factory.h

FORMS    += mainwindow.ui \
    start_window.ui

RESOURCES += \
    resource.qrc
