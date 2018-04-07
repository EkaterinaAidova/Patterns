#ifndef TURKEYADDAPTER_H
#define TURKEYADDAPTER_H
#include "duck.h"
#include "turkey.h"
class TurkeyAddapter : public Duck
{
    Turkey* t;
public:
    TurkeyAddapter();
    TurkeyAddapter(Turkey* t);
    virtual void quack();
    virtual void fly();
};

#endif // TURKEYADDAPTER_H
