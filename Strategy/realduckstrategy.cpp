#include "realduckstrategy.h"
#include "iostream"

RealDuckStrategy::RealDuckStrategy()
{

}

void RealDuckStrategy::swim()
{
    std::cout << "swim in all directions" << std::endl;
}

void RealDuckStrategy::grunt()
{
    std::cout << "quack quack" << std::endl;
}

void RealDuckStrategy::dive()
{
    std::cout << "dive deeply" << std::endl;
}

void RealDuckStrategy::fly()
{
    std::cout << "fly" << std::endl;
}

void RealDuckStrategy::showOptions()
{
 swim();
 dive();
 grunt();
 fly();
}
