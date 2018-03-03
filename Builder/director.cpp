#include "director.h"
#include <iostream>
#include <random>
Director::Director()
{
}

void Director::makeTour(bool loc)
{
    tb->createTour();
    tb->addDays(rand()%7 + 1);
    tb->addMembers(rand()%5+1);
   if (!loc)
   {
       tb->addHotel("Grand Hotel", rand()%2000+800);
   }
   tb->addProgramm();
   auto tour = tb->getTour();
   std::cout << "TOUR INFO" << std::endl;
   if (!loc)
   {
       std::cout << "hotel " << tour->getHotel() << std::endl;
       std::cout << "hotel cost " << tour->getHotelCost() << std::endl;
   }
   tour->info();
}
