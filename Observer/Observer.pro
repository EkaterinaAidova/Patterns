TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    meteostation.cpp \
    iobserver.cpp \
    weatherdata.cpp \
    weatherscreen.cpp

HEADERS += \
    meteostation.h \
    iobserver.h \
    weatherdata.h \
    weatherscreen.h

