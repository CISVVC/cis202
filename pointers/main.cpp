#include<iostream>


int main()
{
   char *text = new char[95];
   char *ptr = text;

   for(int i=32;i<127;i++)
   {
      //text[i-32] = static_cast<char>(i);
      *ptr = static_cast<char>(i);
      ptr++;
   }

   ptr = text; 
   for(int i=0;i<95;i++)
   {
      std::cout << * ptr << std::endl;
      ptr++;
//      std::cout <<  text[i] << std::endl;
   }
      
   return 0;
}
