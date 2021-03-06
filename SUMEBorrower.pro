#-------------------------------------------------
#
# Project created by QtCreator 2017-07-18T13:43:10
#
#-------------------------------------------------

QT       += core gui sql
QT       += widgets
QT       += xlsx

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SUMEBorrower
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
        main.cpp \
        sumeborrower.cpp \
    customqtui.cpp \
    borrowers.cpp \
    borrowingd.cpp \
    confirmations.cpp \
    listborrowers.cpp \
    listequipments.cpp \
    utils.cpp \
    homedisplay.cpp \
    information.cpp \
    infopopup.cpp \
    borrowerdata.cpp \
    studentdetails.cpp \
    subjectui.cpp \
    experiments.cpp \
    login.cpp \
    stackedwidget.cpp \
    changepass.cpp

HEADERS += \
    sumeborrower.h \
    customqtui.h \
    laboratorylib.h \
    borrowers.h \
    borrowingd.h \
    confirmations.h \
    listborrowers.h \
    listequipments.h \
    utils.h \
    homedisplay.h \
    information.h \
    infopopup.h \
    borrowerdata.h \
    studentdetails.h \
    subjectui.h \
    ui_anothersubject.h \
    ui_subjectui.h \
    experiments.h \
    login.h \
    stackedwidget.h \
    changepass.h

FORMS += \
        sumeborrower.ui \
    borrowers.ui \
    borrowingd.ui \
    confirmations.ui \
    listborrowers.ui \
    listequipments.ui \
    homedisplay.ui \
    information.ui \
    infopopup.ui \
    subjectui.ui \
    experiments.ui \
    login.ui \
    changepass.ui



win32: LIBS += -L$$PWD/./ -lLaboratoryLib

RC_FILE = myapp.rc

RESOURCES += \
    resources.qrc
