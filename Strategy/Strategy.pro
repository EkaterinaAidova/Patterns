TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    duck.cpp \
    realduckstrategy.cpp \
    woodenstrategy.cpp \
    rubberstrategy.cpp \
    realduck.cpp \
    rubberduck.cpp \
    woodenduck.cpp \
    ducksrategy.cpp \
    decorativeduck.cpp

DISTFILES += \
    Strategy.pro.user \
    ReadMe.txt

HEADERS += \
    duck.h \
    realduckstrategy.h \
    woodenstrategy.h \
    rubberstrategy.h \
    duckstrategy.h \
    realduck.h \
    rubberduck.h \
    woodenduck.h \
    decorativeduck.h

