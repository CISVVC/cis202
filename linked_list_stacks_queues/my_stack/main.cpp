#include<iostream>
#include "stack.hpp"

int main()
{
   Stack<int> my_stack;
   my_stack.push(30);
   my_stack.push(20);
   my_stack.push(10);
   try
   {
      while(my_stack.size() > 0)
      {
         std::cout << my_stack.top() << std::endl;
         my_stack.pop();
      }
      my_stack.pop();
   }
   catch(const char* e)
   {

      std::cout << e << std::endl;
   }

//   std::cout << my_stack.top() << std::endl;

   return 0;
}
