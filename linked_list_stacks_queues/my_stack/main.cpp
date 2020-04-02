#include<iostream>
#include "stack.hpp"

int main()
{
   Stack<int> my_stack;
   my_stack.push(30);
   my_stack.push(20);
   my_stack.push(10);
   while(my_stack.size() > 0)
   {
      std::cout << my_stack.top() << std::endl;
      my_stack.pop();
   }

   return 0;
}
