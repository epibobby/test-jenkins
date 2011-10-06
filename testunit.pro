#-------------------------------------------------
#
# Project created by QtCreator 2011-10-03T16:16:12
#
#-------------------------------------------------

QT       += core
QT       -= gui

TARGET = testunit
CONFIG   += console
CONFIG   -= app_bundle
CONFIG (debug): DEFINES += UNIT_TESTS

contains(DEFINES, UNIT_TESTS) {
    QT += testlib
}
TEMPLATE = app


SOURCES += \
    testunit/sampleTestUnit.cpp \
    testunit/ctestplus.cpp

HEADERS += \
    testunit/ctestplus.h
