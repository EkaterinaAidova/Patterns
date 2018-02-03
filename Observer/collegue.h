#ifndef COLLEGUE_H
#define COLLEGUE_H
#include "mediator.h"

class Colleague
{
protected:
        Mediator* mediator_;

public:
        explicit Colleague(Mediator *mediator):mediator_(mediator)
        {
        }
};

#endif // COLLEGUE_H
