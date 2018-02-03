#include <iostream>
#include <vector>
#include "duck.h"
#include "realduck.h"
#include "rubberduck.h"
#include "woodenduck.h"
#include "woodenstrategy.h"
#include "realduckstrategy.h"
#include "rubberstrategy.h"
#include "decorativeduck.h"

using namespace std;

int main()
{
    vector<DecorativeDuck*> ducks;
	for (int i = 0; i < 10; i++)
	{
        switch (i%3)
		{
		case 0:
            ducks.push_back(new DecorativeDuck(new RealDuck(new RealDuckStrategy())));
			break;
		case 1:
            ducks.push_back(new DecorativeDuck(new WoodenDuck(new WoodenStrategy())));
			break;
		case 2:
            ducks.push_back(new DecorativeDuck(new RubberDuck(new RubberStrategy())));
			break;
		}
	}
    for (auto duck : ducks)
	{
        duck->useStrategy();

    }
    int krya=0;
    for (auto duck : ducks)
    {
        krya += duck->getCount();

    }
    std::cout << krya << std::endl;

}
