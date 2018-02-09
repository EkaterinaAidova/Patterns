#include "duckfactory.h"
#include "realduck.h"
#include "realduckstrategy.h"
#include "woodenduck.h"
#include "woodenstrategy.h"
#include "rubberduck.h"
#include "rubberstrategy.h"
DuckFactory::DuckFactory()
{

}
Duck* DuckFactory::createRealDuck()
{
    return new RealDuck(new RealDuckStrategy());
}

Duck* DuckFactory::createWoodenDuck()
{
    return new WoodenDuck(new WoodenStrategy());
}
Duck* DuckFactory::createRubberDuck()
{
    return new RubberDuck(new RubberStrategy());
}
