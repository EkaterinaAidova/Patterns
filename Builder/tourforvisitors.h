#ifndef TOURFORVISITORS_H
#define TOURFORVISITORS_H
#include "tour.h"
#include <string>

class TourForVisitors: public Tour
{

public:
    TourForVisitors();
    virtual void setHotel(std::string h, double cost);
    virtual void info();
};

#endif // TOURFORVISITORS_H
