#ifndef DUCK_H
#define DUCK_H
#include "duckstrategy.h"


class Duck
{
public:
	Duck();
    virtual void quack() = 0;
    virtual void fly() = 0 ;
	~Duck();

};
#endif //DUCK_H
