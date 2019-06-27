#-------------------------------------------------
#
# Project created by QtCreator 2019-03-18T15:48:24
#
#-------------------------------------------------

QT       += core gui webenginewidgets webchannel

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11  // 支持C++11

TARGET = EchartsDemo
TEMPLATE = app


SOURCES += main.cpp \
        mainwindow.cpp


SOURCES += tinystr.cpp\
        tinyxml.cpp\
        tinyxmlerror.cpp\
        tinyxmlparser.cpp

SOURCES += cJSON.c

HEADERS  += mainwindow.h


HEADERS += tinyxml.h \
        tinystr.h

HEADERS += cJSON.h


FORMS    += mainwindow.ui

RESOURCES +=

DISTFILES += \
        res/echarts/echarts.js \
        res/tree-radial.html


