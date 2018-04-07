#include "turkeyaddapter.h"

TurkeyAddapter::TurkeyAddapter()
{

}

TurkeyAddapter::TurkeyAddapter(Turkey *t)
{
    this->t = t;

}
void TurkeyAddapter::quack()
{
    t->gobble();
}
void TurkeyAddapter::fly()
{
    for (int i = 0; i<5; i++)
    {
        t->fly();
    }
}
