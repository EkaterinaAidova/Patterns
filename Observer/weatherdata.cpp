#include "weatherdata.h"

WeatherData::WeatherData()
{

}

void WeatherData::notify()
{
    Meteodata meteo;
    meteo.temp = st.getTemperature();
    meteo.pres = st.getPressure();
    meteo.hum = st.getHumidity();
        for(auto iter = _observers.begin(); iter != _observers.end(); ++iter)
        {
            (*iter)->handleEvent(meteo);
        }
}

void WeatherData::add(IObserver &ref)
{
    _observers.push_back(&ref);
}

void WeatherData::remove(IObserver &ref)
{
    _observers.remove(&ref);
}

void WeatherData::dataUpdated()
{
    st.update();
    notify();
}
