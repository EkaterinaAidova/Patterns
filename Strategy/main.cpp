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
    vector<Duck*> decducks;
    vector <Duck*> normducks;
    AbstractDuckFactory* decDucksFactory = new DecorativeDuckFactory();
    AbstractDuckFactory* normDucksFactory = new DuckFactory();


	for (int i = 0; i < 10; i++)
	{
        switch (i%3)
		{
		case 0:
            decducks.push_back(decDucksFactory->createRealDuck());
            normducks.push_back(normDucksFactory->createRealDuck());
			break;
		case 1:
            decducks.push_back(decDucksFactory->createWoodenDuck());
            normducks.push_back(normDucksFactory->createWoodenDuck());
			break;
		case 2:
            decducks.push_back(decDucksFactory->createRubberDuck());
            normducks.push_back(normDucksFactory->createRubberDuck());
			break;
		}
	}
    for (auto duck : normducks)
	{
        duck->useStrategy();

    }
    for (auto duck : decducks)
    {
        duck->useStrategy();

    }
    int krya=0;
    for (auto duck : decducks)
    {
        auto d = dynamic_cast<DecorativeDuck*>(duck);
        if (d!=nullptr)
        krya += d->getCount();

    }
    std::cout << "\nnumber of quaks = "<< krya << std::endl;

}
