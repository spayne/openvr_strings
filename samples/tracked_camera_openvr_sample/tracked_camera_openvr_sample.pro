#-------------------------------------------------
#
# Project created by QtCreator 2016-05-23T14:37:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tracked_camera_openvr_sample
TEMPLATE = app


SOURCES += main.cpp\
        tracked_camera_openvr_sample.cpp \
        ../../src/openvr_string_structs.cpp\
        ../../src/openvr_string_gen_enums.cpp\
        ../../src/openvr_string_passthru_enums.cpp

HEADERS  += tracked_camera_openvr_sample.h

INCLUDEPATH += ../../headers $$(OPENVR_BASE)/headers

LIBS += -L$$(OPENVR_BASE)/lib/win32
LIBS += -lopenvr_api
DESTDIR = ../bin/win32

