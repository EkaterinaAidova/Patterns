TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    duck.cpp \
    realduck.cpp \
    duckaddapter.cpp \
    turkey.cpp \
    realturkey.cpp \
    turkeyaddapter.cpp \
    main.cpp

DISTFILES += \
    Strategy.pro.user \
    ReadMe.txt

HEADERS += \
    duck.h \
    realduck.h \
    duckaddapter.h \
    turkey.h \
    realturkey.h \
    turkeyaddapter.h

