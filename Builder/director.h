#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "tourbuilder.h"
class Director
{
    TourBuilder *tb;
public:
    Director();
    void makeTour(bool loc=false);
};

#endif // DIRECTOR_H
