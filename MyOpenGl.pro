#-------------------------------------------------
#
# Project created by QtCreator 2017-09-08T15:41:08
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyOpenGl
TEMPLATE = app

LIBS += -lopengl32 \
    -lglu32


SOURCES += main.cpp\
        myglwidget.cpp

HEADERS  += myglwidget.h

FORMS    += myglwidget.ui
