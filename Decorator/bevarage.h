#ifndef BEVARAGE_H
#define BEVARAGE_H
#include <string>
#include <map>

class Bevarage
{
protected:
    std::string description;
    double price;

public:
    enum class Size { SMALL, MED, BIG };
    Bevarage();
    virtual double cost()=0;
    virtual std::string getDescription()=0;
    void setSize(Bevarage::Size sz);
    Bevarage::Size getSize();
    std::string getSizeStr();
    Size size;
    void setPrice(double pr);


};

#endif // BEVARAGE_H
