#include "meteostation.h"
#include <random>

MeteoStation::MeteoStation()
{

}

int MeteoStation::getPressure()
{
    return this->preassure;
}

int MeteoStation::getTemperature()
{
    return this->temperature;
}

int MeteoStation::getHumidity()
{
    return this->humidity;
}
void MeteoStation::update()
{
    temperature = rand()%40 -10;
    preassure = rand()%750 + 720;
    humidity = rand()%100;

}
