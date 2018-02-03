#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "iobserver.h"
#include "meteostation.h"
#include <list>



class IObserver;

class WeatherData
{
    std::list<IObserver*> _observers;
    MeteoStation st;
    void notify();
public:
    WeatherData();

    void add(IObserver &ref);
    void remove(IObserver &ref);
    void dataUpdated();
    void getData();



};

#endif // WEATHERDATA_H
