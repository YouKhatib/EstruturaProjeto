#-------------------------------------------------
#
# Project created by QtCreator 2019-03-31T09:15:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    janelaprincipal.cpp \
    palestra.cpp \
    quartos.cpp \
    registro.cpp \
    adm.cpp \
    servico.cpp \
    mudarcardapio.cpp

HEADERS += \
    fila.h \
    hash.h \
    les.h \
        mainwindow.h \
    janelaprincipal.h \
    palestra.h \
    pilha.h \
    quartos.h \
    registro.h \
    adm.h \
    servico.h \
    mudarcardapio.h \
    lde.h

FORMS += \
        mainwindow.ui \
    janelaprincipal.ui \
    palestra.ui \
    quartos.ui \
    registro.ui \
    adm.ui \
    servico.ui \
    mudarcardapio.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
