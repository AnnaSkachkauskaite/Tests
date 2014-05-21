QT       += core

QT       -= gui
QT       += testlib

TARGET = TestSort
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    intcomparator.cpp \
    charcomparator.cpp \
    intcomparatortest.cpp \
    charcomparatortest.cpp \
    stringcomparator.cpp \
    stringcomparatortest.cpp \
    intbubblesortertest.cpp

HEADERS += \
    comparator.h \
    intcomparator.h \
    charcomparator.h \
    bubblesorter.h \
    intcomparatortest.h \
    charcomparatortest.h \
    stringcomparator.h \
    stringcomparatortest.h \
    intbubblesortertest.h
