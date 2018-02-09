#ifndef DUCKFACTORY_H
#define DUCKFACTORY_H
#include"abstractduckfactory.h"

class DuckFactory : public AbstractDuckFactory
{
public:
    DuckFactory();
    virtual Duck* createRealDuck();
    virtual Duck* createWoodenDuck();
    virtual Duck* createRubberDuck();
};

#endif // DUCKFACTORY_H
