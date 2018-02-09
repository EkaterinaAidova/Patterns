#ifndef FLOCK_H
#define FLOCK_H
#include <vector>
#include "duck.h"
#include "abstractduckfactory.h"

class Flock
{
    std::vector<Duck*> ducks;
public:
    Flock();
    virtual void addDucks(AbstractDuckFactory& factory)=0;
    virtual void useDuckStrategy()=0;
};

#endif // FLOCK_H
