#include<iostream>

#include "pop.h"

Pop::Pop()
{
   std::cout << "Pop::Pop()" << std::endl;
}

void Pop::talk()
{
   std::cout << "Pop" << std::endl;
}
