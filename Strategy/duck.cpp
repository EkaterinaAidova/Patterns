#include "duck.h"


Duck::Duck()
{
}


Duck::~Duck()
{
}

Duck::Duck(DuckStrategy *strat)
{
    strategy = strat;
}

void Duck::setStrategy(DuckStrategy *strat)
{
    strategy = strat;
}

DuckStrategy* Duck::getStrategy()
{
    return strategy;
}
