#include "rubberduck.h"
#include <iostream>

RubberDuck::RubberDuck()
{

}

RubberDuck::~RubberDuck()
{
}

void RubberDuck::useStrategy()
{
    std::cout << "it is rubber duck and it can:" << std::endl;
    strategy->showOptions();
}


 RubberDuck::RubberDuck(DuckStrategy *strat):Duck(strat)
{}

