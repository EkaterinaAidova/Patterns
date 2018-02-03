#ifndef MILK_H
#define MILK_H
#include <string>
#include "condimentdecorator.h"

class Milk: public CondimentDecorator
{
    
public:
    Milk();
    Milk(Bevarage *bev);
    virtual std::string getDescription();
    virtual double cost();
};

#endif // MILK_H
