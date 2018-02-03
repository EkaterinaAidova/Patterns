#ifndef METEOSTATION_H
#define METEOSTATION_H



class Meteodata
{
public:
    int temp;
    int pres;
    int hum;
};
class MeteoStation
{
    int preassure;
    int temperature;
    int humidity;
public:
    MeteoStation();
    int getPressure();
    int getTemperature();
    int getHumidity();
    void update();

};

#endif // METEOSTATION_H
