#include <iostream>
#include <vector>
#include "duck.h"
#include "realduck.h"
#include "turkey.h"
#include "realturkey.h"
#include "duckaddapter.h"
#include "turkeyaddapter.h"
using namespace std;

int main()
{
    vector <Duck*> ducks;
    for (int i = 0; i < 5; i++)
    {
        auto r = rand()%2;
        if(r)
        {
         ducks.push_back(new RealDuck());
        }
        else
        {
         ducks.push_back(new TurkeyAddapter(new RealTurkey()));
        }
    }


    vector <Turkey*> turkeys;
    for (int i = 0; i < 5; i++)
    {
        auto r = rand()%2;
        if(r)
        {
         turkeys.push_back(new RealTurkey());
        }
        else
        {
         turkeys.push_back(new DuckAddapter(new RealDuck()));
        }
    }
   std::cout << "ducks:" << std::endl;
   int quack = 0;
   int gobble = 0;
   for (auto duck : ducks)
   {
       duck->quack();
       duck->fly();
       auto d = dynamic_cast<TurkeyAddapter*>(duck);
       if (d != nullptr)
       {
           gobble += 1;
       }
       else
       {
           quack +=1;
       }
   }
   std::cout << "turkey:" << std::endl;
   for (auto turkey : turkeys)
   {
       turkey->gobble();
       turkey->fly();
       auto d = dynamic_cast<DuckAddapter*>(turkey);
       if (d != nullptr)
       {
           quack += 1;
       }
       else
       {
           gobble +=1;
       }


   }
   std::cout << "Count of quaks = " << quack << std::endl;
   std::cout << "Count of gobble = " << gobble << std::endl;

}
