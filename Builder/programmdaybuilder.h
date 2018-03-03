#ifndef PROGRAMMBUILDER_H
#define PROGRAMMBUILDER_H
#include "programm.h"

class ProgrammDayBuilder
{
    Programm *program;
public:
    ProgrammDayBuilder();
    void addDinner();
    void addBreakfest();
    void addIceShow();
    void addCircus();
    void addTheater();
    void createProgramm();
    void addParkVisit();
    Programm* getProgramm();
};

#endif // PROGRAMMBUILDER_H
