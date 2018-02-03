#include "woodenstrategy.h"
#include <iostream>

WoodenStrategy::WoodenStrategy()
{

}
void WoodenStrategy::showOptions()
{
    swim();
}

void WoodenStrategy::swim()
{
    std::cout << "drift on the floating" << std::endl;
}
