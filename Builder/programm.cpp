#include "programm.h"

Programm::Programm()
{
 sum = 0;
}

void Programm::bayTicket(double m)
{
    sum+=m;
}
double Programm::getTotal()
{
    return sum;
}

void Programm::addActivity(std::string act)
{
    programm.push_back(act);
}
 std::vector <std::string>  Programm::getActivities()
 {
     return programm;
 }
