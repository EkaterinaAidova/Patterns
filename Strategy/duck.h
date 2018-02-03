#ifndef DUCK_H
#define DUCK_H
#include "duckstrategy.h"


class Duck
{
protected:
    DuckStrategy* strategy;
public:
	Duck();
    Duck(DuckStrategy* strat);
	~Duck();
   virtual void useStrategy()=0;
   void setStrategy(DuckStrategy* strat);
   DuckStrategy* getStrategy();

};
#endif //DUCK_H
