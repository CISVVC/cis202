#include<iostream>
#include<string>


int main()
{
   
   int i = 42;
   std::string my_str = std::to_string(i);
   std::cout << "Your number as a string is " << my_str << std::endl;

   return 0;
}
