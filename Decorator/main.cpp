#include <iostream>
#include "bevarage.h"
#include "espresso.h"
#include "darkroast.h"
#include "milk.h"
#include "whip.h"

using namespace std;

int main()
{
    Bevarage *coffie1 = new Espresso();
    std::cout << "description:" << coffie1->getDescription() << " price: " << coffie1->cost() << " size:"<< coffie1->getSizeStr()<< std::endl;
    Bevarage *coffie2 = new Milk(new Espresso());
    Bevarage *coffie3 = new Whip(new Milk( new Espresso));
    std::cout << "description:" << coffie2->getDescription() << " price: " << coffie2->cost() << " size:"<< coffie2->getSizeStr() << std::endl;
     std::cout << "description:" << coffie3->getDescription() << " price: " << coffie3->cost() << " size:"<< coffie3->getSizeStr() << std::endl;

    return 0;
}

