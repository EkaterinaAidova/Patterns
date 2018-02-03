#ifndef REALDUCKSTRATEGY_H
#define REALDUCKSTRATEGY_H
#include "duckstrategy.h"

class RealDuckStrategy : public DuckStrategy
{
public:
    RealDuckStrategy();
    virtual void showOptions();
    void swim();
    void grunt();
    void fly();
    void dive();
};

#endif // REALDUCKSTRATEGY_H
