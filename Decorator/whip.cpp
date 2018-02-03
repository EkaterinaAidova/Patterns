#include "whip.h"

Whip::Whip()
{

    price = 0.2;
    description = "Whip";

}

Whip::Whip(Bevarage *bv)
{

    price = 0.2;
    description = "Whip";
    bevarage = bv;
}

double Whip::cost()
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

std::string Whip::getDescription()
{
    std::string descriptionSummary = bevarage->getDescription()+" , "+description;
    return descriptionSummary;
}
