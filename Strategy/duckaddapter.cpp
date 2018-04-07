#include "duckaddapter.h"
#include  <cstdlib>

DuckAddapter::DuckAddapter()
{

}

DuckAddapter::DuckAddapter(Duck *d)
{
    this->d = d;
}
void DuckAddapter::gobble()
{
    this->d->quack();
}
void DuckAddapter::fly()
{
 auto r  = rand()%5;
 for (int i=0; i<r; i++)
 {
     this->d->fly();
 }
}
