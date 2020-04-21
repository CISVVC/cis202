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

   Stack<std::string> my_stringstack;
   my_stringstack.push("one");
   my_stringstack.push("two");
   my_stringstack.push("three");
   my_stringstack.push("four");
   try
   {
      while(my_stringstack.size() > 0)
      {
         std::cout << my_stringstack.top() << std::endl;
         my_stringstack.pop();
      }
      my_stringstack.pop();
   }
   catch(const char* e)
   {

      std::cout << e << std::endl;
   }


   return 0;
}
