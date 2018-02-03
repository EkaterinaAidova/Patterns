#ifndef DARKROAST_H
#define DARKROAST_H
#include "bevarage.h"

class DarkRoast:public Bevarage
{
public:
    DarkRoast();
    virtual double cost();
    virtual std::string getDescription();
};

#endif // DARKROAST_H
