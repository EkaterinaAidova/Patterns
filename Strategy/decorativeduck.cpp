#include "decorativeduck.h"
#include "realduckstrategy.h"
#include "rubberstrategy.h"
DecorativeDuck::DecorativeDuck()
{
count = 0;
}

DecorativeDuck::DecorativeDuck(Duck *p)
{
 ptr = p;
 count = 0;
}

void DecorativeDuck::useStrategy()
{
  if((dynamic_cast<RealDuckStrategy*>(ptr->getStrategy())!=nullptr) || (dynamic_cast<RubberStrategy*>(ptr->getStrategy())!=nullptr))
  {
    ++count;
  }
}

int DecorativeDuck::getCount()
{
    return count;
}
