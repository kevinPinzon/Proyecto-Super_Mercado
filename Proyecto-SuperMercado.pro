#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T06:38:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto-SuperMercado
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    inventario.cpp \
    agregarproducto.cpp \
    eliminar.cpp \
    unuevo.cpp \
    modificar.cpp \
    verinventario.cpp

HEADERS  += mainwindow.h \
    productos.h \
    alimentos.h \
    frutas.h \
    usuario.h \
    bebidas.h \
    inventario.h \
    sodas.h \
    agregarproducto.h \
    vegetales.h \
    postres.h \
    granos.h \
    carnes.h \
    congelados.h \
    eliminar.h \
    unuevo.h \
    modificar.h \
    verinventario.h \
    jugos.h \
    agua.h \
    alcohol.h

FORMS    += mainwindow.ui \
    inventario.ui \
    agregarproducto.ui \
    eliminar.ui \
    unuevo.ui \
    modificar.ui \
    verinventario.ui
