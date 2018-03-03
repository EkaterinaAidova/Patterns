#ifndef TOURBUILDER_H
#define TOURBUILDER_H

#include "tour.h"
#include "programmdaybuilder.h"
class TourBuilder
{
protected:
    Tour* tour;
    ProgrammDayBuilder *pb;
public:
    TourBuilder();
    void createTour();
    void addDays(int d);
    void addMembers(int cnt);
    void addHotel(std::string h, double cost);
    void addProgramm();
    Tour* getTour();
};

#endif // TOURBUILDER_H
