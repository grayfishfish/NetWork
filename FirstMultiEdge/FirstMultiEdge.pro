#-------------------------------------------------
#
# Project created by QtCreator 2017-09-15T10:12:32
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FirstMultiEdge
TEMPLATE = app

LIBS += -lopengl32 \
        -lglu32
        -lglut32
        -lglut


SOURCES += main.cpp\
        multiedges.cpp

HEADERS  += multiedges.h

FORMS    += multiedges.ui
