#include "milk.h"

Milk::Milk()
{
    price = 0.25;
    description = "Milk";
}

Milk::Milk(Bevarage *bev)
{

    price = 0.25;
    description = "Milk";
    bevarage = bev;
    size = bev->size;
}

double Milk::cost()
{
    double curPrice;
    switch(size)
    {
    case Bevarage::Size::BIG : curPrice = price*3; break;
    case Bevarage::Size::MED : curPrice = price*2; break;
    case Bevarage::Size::SMALL: curPrice = price; break;

    }
    return bevarage->cost()+curPrice;
}

std::string Milk::getDescription()
{
    std::string descriptionSummary = bevarage->getDescription()+" , "+description;
    return descriptionSummary;
}
