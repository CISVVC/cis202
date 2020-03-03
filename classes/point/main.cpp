#include<iostream>
#include "point.h"


int main()
{
   Point p1(1,2);
   Point p2(2,3);
   
   std::cout << p1.distance(p2) << std::endl;
   p1.print();
   p2.print();

   p1.add(Point(5,3)).print();

   return 0;
}
