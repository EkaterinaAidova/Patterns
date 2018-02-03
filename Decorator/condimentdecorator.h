#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "bevarage.h"

class CondimentDecorator: public Bevarage
{
protected:
    Bevarage *bevarage;
public:
    CondimentDecorator();
    CondimentDecorator(Bevarage *bev);
    virtual std::string getDescription()=0;
    virtual double cost()=0;
};

#endif // CONDIMENTDECORATOR_H
