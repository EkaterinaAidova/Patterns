#ifndef IOBSERVER_H
#define IOBSERVER_H
#include "weatherdata.h"

class Meteodata;
class IObserver
{
public:
    IObserver();
    virtual void handleEvent(Meteodata data) = 0;
};

#endif // IOBSERVER_H
