#ifndef DECORATIVEDUCK_H
#define DECORATIVEDUCK_H
#include "duck.h"

class DecorativeDuck : public Duck
{
    int count;
    Duck *ptr;
public:
    DecorativeDuck(Duck *p);
    DecorativeDuck();
   virtual void useStrategy();
    int getCount();
};

#endif // DECORATIVEDUCK_H
