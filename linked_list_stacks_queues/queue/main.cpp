#include<iostream>
#include<string>
#include<stack>
#include<queue>



int main()
{
   std::queue<std::string> q;
   std::stack<std::string> s;
   q.push("one");
   q.push("two");
   q.push("three");
   q.push("four");

   s.push("one");
   s.push("two");
   s.push("three");
   s.push("four");

   
   std::cout << "from the queue" << std::endl;
   while(!q.empty())
   {
      std::cout << q.front() << " ";
      q.pop();
   }
   std::cout << std::endl;

   std::cout << "from the stack" << std::endl;
   while(!s.empty())
   {
      std::cout << s.top() << " ";
      s.pop();
   }
   std::cout << std::endl;

   return 0;
}
