#ifndef WOODENDUCK_H
#define WOODENDUCK_H
#include "duck.h"

class WoodenDuck: public Duck
{
public:
	WoodenDuck();
    WoodenDuck(DuckStrategy* strat);
	~WoodenDuck();
    virtual void useStrategy();
};
#endif //WOODENDUCK_H
