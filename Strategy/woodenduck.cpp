#include "woodenduck.h"
#include <iostream>

WoodenDuck::WoodenDuck()
{
}


WoodenDuck::~WoodenDuck()
{
}

void WoodenDuck::useStrategy()
{
    std::cout << "it is wooden duck and it can:" << std::endl;
    strategy->showOptions();
}

WoodenDuck::WoodenDuck(DuckStrategy *strat):Duck(strat)
{}
