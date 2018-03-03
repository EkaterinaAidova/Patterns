#include "tourforvisitors.h"
#include <iostream>
TourForVisitors::TourForVisitors()
{

}

void TourForVisitors::setHotel(std::string h, double cost)
{
    hotel = h;
   // hotelPerDay = cost;
}

void TourForVisitors::info()
{
    double sum=0;
    std::cout << "tour consist is "<< days << std::endl;
    std::cout << "hotel" << hotel << std::endl;
 //   std::cout << "hotel cost" << hotelPerDay * days;
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
    std::cout << "programm cost:  "<< sum << std::endl;
}
