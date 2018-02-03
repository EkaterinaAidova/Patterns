#ifndef WHIP_H
#define WHIP_H
#include "condimentdecorator.h"

class Whip: public CondimentDecorator
{
public:
    Whip();
    Whip(Bevarage *bv);
    virtual std::string getDescription();
    virtual double cost();
};

#endif // WHIP_H
