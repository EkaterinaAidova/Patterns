#include "decorativeduckfactory.h"
#include "decorativeduck.h"
#include "realduck.h"
#include "realduckstrategy.h"
#include "woodenduck.h"
#include "woodenstrategy.h"
#include "rubberduck.h"
#include "rubberstrategy.h"

DecorativeDuckFactory::DecorativeDuckFactory()
{

}

Duck* DecorativeDuckFactory::createRealDuck()
{
    return new DecorativeDuck(new RealDuck(new RealDuckStrategy()));
}

Duck* DecorativeDuckFactory::createWoodenDuck()
{
    return new DecorativeDuck(new WoodenDuck(new WoodenStrategy()));
}
Duck* DecorativeDuckFactory::createRubberDuck()
{
    return new DecorativeDuck(new RubberDuck(new RubberStrategy()));
}
