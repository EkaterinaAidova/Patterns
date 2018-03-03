#include "programmdaybuilder.h"
#include <random>
ProgrammDayBuilder::ProgrammDayBuilder()
{

}

void ProgrammDayBuilder::addDinner()
{
    program->addActivity("Dinner in local caffe");
}
void ProgrammDayBuilder::addBreakfest()
{
    program->addActivity("Breackfest in local caffe");
}
void ProgrammDayBuilder::addIceShow()
{
 program->addActivity("ice show for 150 rub");
 //program->bayTicket(150);
}
void ProgrammDayBuilder::addCircus()
{
    program->addActivity("circus for 250 rub");
    program->bayTicket(250);
}
void ProgrammDayBuilder::addTheater()
{
    program->addActivity("circus for 300 rub");
    program->bayTicket(300);
}
void ProgrammDayBuilder::createProgramm()
{
    program = new Programm();
}
 Programm* ProgrammDayBuilder::getProgramm()
 {
     return program;
 }

 void ProgrammDayBuilder::addParkVisit()
 {
     program ->addActivity("park attendancy. Park ticket 99.99");
     program->bayTicket(99.99);
 }
