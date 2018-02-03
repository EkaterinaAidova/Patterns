#include <iostream>
#include "weatherdata.h"
#include "weatherscreen.h"
using namespace std;

int main()
{
    WeatherData datacenter;
    WeatherScreen screen1, screen2;
    screen1.setScreenName("#1");
    screen2.setScreenName("#2");
    datacenter.add(screen1);
    datacenter.dataUpdated();
    datacenter.add(screen2);
    datacenter.dataUpdated();
    datacenter.remove(screen1);
    datacenter.dataUpdated();

}

