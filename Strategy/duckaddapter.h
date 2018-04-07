#ifndef DUCKADDAPTER_H
#define DUCKADDAPTER_H
#include "duck.h"
#include "turkey.h"

class DuckAddapter : public Turkey
{
    Duck* d;

public:
    DuckAddapter();
    DuckAddapter(Duck* d);
    virtual void gobble();
    virtual void fly();
};

#endif // DUCKADDAPTER_H
