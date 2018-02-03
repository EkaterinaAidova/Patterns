#include "realduck.h"
#include <iostream>

RealDuck::RealDuck()
{

}

RealDuck::RealDuck(DuckStrategy *strat):Duck(strat)
{
}
RealDuck::~RealDuck()
{
}

void RealDuck::useStrategy()
{
    std::cout << "it is real duck and it can:" << std::endl;
    strategy->showOptions();
}


