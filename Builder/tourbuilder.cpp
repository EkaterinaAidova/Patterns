#include "tourbuilder.h"

TourBuilder::TourBuilder()
{

}

void TourBuilder::createTour()
{
 tour = new Tour();
}
void TourBuilder::addDays(int d)
{
 tour->setDays(d);
}
void TourBuilder::addHotel(std::string h, double cost)
{
 tour->setHotel(h);
 tour->setHotelPerDay(cost);
}

void TourBuilder::addProgramm()
{
    int d = tour->getDays();
    for(int i=0; i<d; i++)
    {
        pb->createProgramm();
        pb->addBreakfest();
        switch (i) {
        case 1:
            pb->addCircus();
            break;
        case 3: pb->addTheater();
            break;
        case 5: pb->addIceShow();
        default:
            pb->addParkVisit();
            break;
        }
        pb->addDinner();
        auto day = pb->getProgramm();
        tour->addProgrammDay(day);
    }
}

Tour* TourBuilder::getTour()
{
    return tour;
}
void TourBuilder::addMembers(int cnt)
{
 tour->setCount(cnt);
}
