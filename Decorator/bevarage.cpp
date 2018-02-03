#include "bevarage.h"

Bevarage::Bevarage(): description("unknown beverage"),
                      size(Size::MED)
{

}


std::string Bevarage::getDescription()
{
    return description;
}

void Bevarage::setPrice(double pr)
{
    price = pr;

}

void Bevarage::setSize(Size sz)
{
    size = sz;
}
Bevarage::Size Bevarage::getSize()
{
    return size;
}

std::string Bevarage::getSizeStr()
{
    switch (size)
    {
    case Size::BIG : return "BIG";
    case Size::MED : return "MEDIUM";
    case Size::SMALL :return "SMALL";
    }

}
