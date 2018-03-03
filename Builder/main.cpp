#include <iostream>
#include "director.h"

using namespace std;

int main()
{
    Director touragency;
    touragency.makeTour(true);
    touragency.makeTour(false);
    return 0;
}

