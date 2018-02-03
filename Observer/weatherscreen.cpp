#include "weatherscreen.h"
#include <iostream>

WeatherScreen::WeatherScreen()
{

}

void WeatherScreen::handleEvent(Meteodata data)
{
    std::cout << "screen: "<< screenName << std::endl;
    std::cout << "Current Weather:\n temperature: "<< data.temp
              << "\npreassure: "<< data.pres
              <<"\nhumility: "<< data.hum << std::endl;
}

void WeatherScreen::setScreenName(std::string str)
{
    screenName = str;
}
