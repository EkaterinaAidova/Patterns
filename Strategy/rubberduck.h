#ifndef RUBBERDUCK_H
#define  RUBBERDUCK_H
#include "duck.h"
class RubberDuck: public Duck
{
public:
	RubberDuck();
	~RubberDuck();
    RubberDuck(DuckStrategy* strat);
    virtual void useStrategy();
};
#endif //RUBBERDUCK_H
