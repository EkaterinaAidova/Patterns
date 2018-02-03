#ifndef WEATHERSCREEN_H
#define WEATHERSCREEN_H
#include "iobserver.h"
#include "weatherdata.h"
#include <string>

class WeatherScreen : public IObserver
{
    std::string screenName;
public:
    WeatherScreen();
    virtual void handleEvent(Meteodata data);
    void setScreenName(std::string);
};

#endif // WEATHERSCREEN_H
