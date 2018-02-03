#include "rubberstrategy.h"Кр
#include <iostream>

RubberStrategy::RubberStrategy()
{

}

void RubberStrategy::showOptions()
{
    swim();
    grunt();
}

void RubberStrategy::grunt()
{
    std::cout << "Кря!" << std::endl;
}

void RubberStrategy::swim()
{
    std::cout << " swim right after push" << std::endl;
}

