#ifndef REALTURKEY_H
#define REALTURKEY_H
#include "turkey.h"

class RealTurkey : public Turkey
{
public:
    RealTurkey();
    virtual void gobble();
    virtual void fly();
};

#endif // REALTURKEY_H
