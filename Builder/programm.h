#ifndef PROGRAMM_H
#define PROGRAMM_H
#include <map>
#include <vector>
#include <string>

class Programm
{
    std::vector <std::string> programm;
    double sum;
public:
    Programm();
    void bayTicket(double m);
    double getTotal();
    void addActivity(std::string act);
     std::vector <std::string>  getActivities();

};

#endif // PROGRAMM_H
