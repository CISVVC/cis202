#include<iostream>
#include<string>
#include<queue>




int main()
{
   std::priority_queue<std::string> pq;

   pq.push("2 - Go to bed");
   pq.push("1 - Eat Dinner");
   pq.push("8 -  Clean Room");
   pq.push("9 - Finish C++ project");

   while(! pq.size() == 0)
   {
      std::cout << pq.top() << std::endl;
      pq.pop();
   }

   return 0;
}
