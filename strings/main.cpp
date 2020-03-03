#include<iostream>
#include<string>


int main()
{
   std::string s1 = "This is a string";
   std::string s2 = s1 + " " + s1;
   std::cout << s2.length() << std::endl;

   return 0;
}
