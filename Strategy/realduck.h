#ifndef REALDUCK_H
#define REALDUCK_H
#include "duck.h"

class RealDuck: public Duck
{
public:
	RealDuck();
    ~RealDuck();
    RealDuck(DuckStrategy* strat);
    virtual void useStrategy();
};
#endif //REALDUCK_H

