#include "tour.h"
#include <iostream>
Tour::Tour()
{

}

void Tour::setDays(int d)
{
 days = d;
}
int Tour::getDays()
{
    return days;
}
void Tour::addProgrammDay(Programm *p)
{
 programm.push_back(*p);
}
void Tour::info()
{
    double sum=0;
    std::cout << "tour for " << count << " persons consist is "<< days << " days" << std::endl;
    std::cout << "tour programm: "<< std::endl;
    for (auto pd : programm)
    {
        auto activities = pd.getActivities();
        for (auto act : activities)
        {
            std::cout << act << std::endl;
        }
        sum += pd.getTotal();
    }
    std::cout << "programm cost:  "<< sum*count<< std::endl;
}

std::string Tour::getHotel()
{
    return hotel;
}
void Tour::setHotel(std::string h)
{
    hotel = h;
}
double Tour::getHotelCost()
{
    return this->hotelPerDay*count*days;
}
void Tour::setHotelPerDay(double cost)
{
    hotelPerDay = cost;
}
void Tour::setCount(int cnt)
{
    count = cnt;
}
