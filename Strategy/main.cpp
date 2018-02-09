#include <iostream>
#include <vector>
#include "duck.h"
#include "decorativeduck.h"
#include "abstractduckfactory.h"
#include "duckfactory.h"
#include "decorativeduckfactory.h"
using namespace std;

int main()
{
    vector <Duck*> ducks;
    AbstractDuckFactory* decDucksFactory = new DecorativeDuckFactory();
    AbstractDuckFactory* normDucksFactory = new DuckFactory();


	for (int i = 0; i < 10; i++)
	{
        switch (i%3)
		{
		case 0:
            ducks.push_back(decDucksFactory->createRealDuck());
            ducks.push_back(normDucksFactory->createRealDuck());
			break;
		case 1:
            ducks.push_back(decDucksFactory->createWoodenDuck());
            ducks.push_back(normDucksFactory->createWoodenDuck());
			break;
		case 2:
            ducks.push_back(decDucksFactory->createRubberDuck());
            ducks.push_back(normDucksFactory->createRubberDuck());
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
        auto d = dynamic_cast<DecorativeDuck*>(duck);
        if (d!=nullptr)
        krya += d->getCount();

    }
    std::cout << "\nnumber of quaks = "<< krya << std::endl;

}
