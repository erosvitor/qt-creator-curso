#-------------------------------------------------
#
# Project created by QtCreator 2016-06-09T18:58:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExemploSubformularioMDI
TEMPLATE = app


SOURCES += main.cpp\
        MDIParent.cpp \
    Subformulario1.cpp \
    Subformulario2.cpp

HEADERS  += MDIParent.h \
    Subformulario1.h \
    Subformulario2.h

FORMS    += MDIParent.ui \
    Subformulario1.ui \
    Subformulario2.ui
