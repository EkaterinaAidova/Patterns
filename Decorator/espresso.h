#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "bevarage.h"

class Espresso: public Bevarage
{
public:
    Espresso();
    virtual double cost();
    virtual std::string getDescription();
};

#endif // ESPRESSO_H
