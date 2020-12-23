#-------------------------------------------------
#
# Project created by QtCreator 2020-12-22T14:21:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = shot-training-manager-system
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


SOURCES += \
    src/main.cpp \
    src/ui/home.cpp \
    src/ui/login.cpp \
    src/modules/devices/DevicesManage.cpp \
    src/modules/personnel/PersonnelManage.cpp \
    src/modules/distribution/DistributionScheme.cpp \
    src/modules/process/TrainProcess.cpp \
    src/modules/performance/PerformanceManage.cpp \
    src/core/database.cpp

HEADERS += \
    src/ui/home.h \
    src/ui/login.h \
    src/modules/devices/DevicesManage.h \
    src/modules/personnel/PersonnelManage.h \
    src/modules/distribution/DistributionScheme.h \
    src/modules/process/TrainProcess.h \
    src/modules/performance/PerformanceManage.h \
    src/modules/inc/modules.h

FORMS += \
    src/ui/home.ui \
    src/ui/login.ui \
    src/modules/devices/DevicesManage.ui \
    src/modules/personnel/PersonnelManage.ui \
    src/modules/distribution/DistributionScheme.ui \
    src/modules/process/TrainProcess.ui \
    src/modules/performance/PerformanceManage.ui
