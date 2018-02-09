#ifndef DECORATIVEDUCKFACTORY_H
#define DECORATIVEDUCKFACTORY_H
#include "abstractduckfactory.h"
#include "duck.h"

class DecorativeDuckFactory: public AbstractDuckFactory
{
public:
    DecorativeDuckFactory();
    virtual Duck* createRealDuck();
    virtual Duck* createWoodenDuck();
    virtual Duck* createRubberDuck();
};

#endif // DECORATIVEDUCKFACTORY_H
