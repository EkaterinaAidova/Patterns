#ifndef ABSTRACTDUCKFACTORY_H
#define ABSTRACTDUCKFACTORY_H
#include "duck.h"

class AbstractDuckFactory
{
public:
    AbstractDuckFactory();
    virtual Duck* createRealDuck()=0;
    virtual Duck* createWoodenDuck()=0;
    virtual Duck* createRubberDuck()=0;

};

#endif // ABSTRACTDUCKFACTORY_H
