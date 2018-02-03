TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bevarage.cpp \
    espresso.cpp \
    darkroast.cpp \
    condimentdecorator.cpp \
    milk.cpp \
    whip.cpp

HEADERS += \
    bevarage.h \
    espresso.h \
    darkroast.h \
    condimentdecorator.h \
    milk.h \
    whip.h

