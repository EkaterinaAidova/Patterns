#ifndef RUBBERSTRATEGY_H
#define RUBBERSTRATEGY_H
#include "duckstrategy.h"


class RubberStrategy : public DuckStrategy
{
public:
    RubberStrategy();
    virtual void showOptions();
    void swim();
    void grunt();
};

#endif // RUBBERSTRATEGY_H
