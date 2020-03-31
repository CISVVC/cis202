#include<iostream>
#include<string>


int main()
{
   std::string s1 = "This is a string";
   std::string s2 = s1 + " " + s1;
   std::cout << s2.length() << std::endl;
   
   int i = 42;

   std::string my_str = std::to_string(i);

   std::cout << "Your number as a string is " << my_str << std::endl;

   return 0;
}
