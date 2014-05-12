QT       += core

QT       -= gui
QT       += testlib

TARGET = Pair
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    pair.cpp \
    complexnumber.cpp \
    complexnumbertest.cpp \
    pairtest.cpp

HEADERS += \
    pair.h \
    complexnumber.h \
    complexnumbertest.h \
    pairtest.h
