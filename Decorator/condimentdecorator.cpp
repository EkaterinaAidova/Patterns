#include "condimentdecorator.h"

CondimentDecorator::CondimentDecorator()
{

}

CondimentDecorator::CondimentDecorator(Bevarage *bev)
{
    bevarage = bev;
    size = bev->size;
}




