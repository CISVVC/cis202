#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sloth.h"

int get_steps(int max)
{
   return rand() % max;
}

const int MAX_STEPS = 3;
int main()
{
   Sloth s();

   for(int i=0;i < 10;i++)
   {
      s.move(get_steps(MAX_STEPS));
      s.act();
   }

   std::cout << s.get_history() << std::endl;

   return 0;

}
