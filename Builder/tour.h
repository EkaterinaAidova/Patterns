#ifndef TOUR_H
#define TOUR_H
#include <string>
#include <map>
#include <vector>
#include "programm.h"
class Tour
{
protected:
    std::vector<Programm> programm;
    std::string hotel;
    int days;
    int count;
    double hotelPerDay;
public:
    Tour();
    void setDays(int d);
    int getDays();
    void addProgrammDay(Programm *p);
    void setHotel(std::string h);
    std::string getHotel();
    std::vector<Programm> getProgramm();
    void info();
    double getHotelCost();
    void setCount(int cnt);
    void setHotelPerDay(double cost);
};

#endif // TOUR_H
