#ifndef REALDUCK_H
#define REALDUCK_H
#include "duck.h"

class RealDuck: public Duck
{
public:
	RealDuck();
    ~RealDuck();
   virtual void quack();
   virtual void fly();
};
#endif //REALDUCK_H

