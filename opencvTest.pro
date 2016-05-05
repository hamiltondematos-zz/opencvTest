#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T14:26:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opencvTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:\\opencv22\\built2\\install\\include

LIBS += -LC:\\opencv22\\built2\\bin  \
    libopencv_core310 \
    libopencv_highgui310 \
    libopencv_imgproc310 \
    libopencv_features2d310 \
    libopencv_calib3d310 \
    libopencv_imgcodecs310 \
