#ifndef WOODENSTRATEGY_H
#define WOODENSTRATEGY_H
#include "duckstrategy.h"

class WoodenStrategy : public DuckStrategy
{
public:
    WoodenStrategy();
    virtual void showOptions();
    virtual void swim();
};

#endif // WOODENSTRATEGY_H
