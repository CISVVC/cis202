#include<iostream>
#include<stack>
//#include "point.h"


int main()
{
   std::stack<std::string> st_stack;
   
   st_stack.push("Hello");
   st_stack.push("this");
   st_stack.push("is");
   st_stack.push("a");
   st_stack.push("stack");
   st_stack.push("of");
   st_stack.push("strings");

   while(st_stack.size() > 0)
   {
      std::cout << st_stack.top() << std::endl;
      st_stack.pop();
   }

   return 0;
}
