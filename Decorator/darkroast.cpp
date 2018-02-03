#include "darkroast.h"

DarkRoast::DarkRoast()
{

    description = "Dark Roast Coffie";
    price = 0.99;

}

double DarkRoast::cost()
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

std::string DarkRoast::getDescription()
{
    return description;
}
