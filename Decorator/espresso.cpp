#include "espresso.h"

Espresso::Espresso()
{
    description="Espresso";
    price=1.99;

}

double Espresso::cost()
{
    double curPrice;
    switch(size)
    {
    case Bevarage::Size::BIG : curPrice = price*3; break;
    case Bevarage::Size::MED : curPrice = price*2; break;
    case Bevarage::Size::SMALL: curPrice = price; break;

    }
    return curPrice;
}

std::string Espresso::getDescription()
{
    return description;
}


