#include<iostream>
#include<cstring>

int my_strlen(char* s)
{
   int count = 0;
   char *tmp = s;
   while(*tmp != '\0')
   {
      count++;
      tmp++;
   }
   return count;

}

int main()
{
   char str1[] = "This is a string";
   std::cout << "length is " << strlen(str1) << std::endl;
   std::cout << "my_strlen length is " << my_strlen(str1) << std::endl;

   char *str2 = new char[strlen(str1)+1];
   std::cout << str1 << std::endl;
   strcpy(str2,str1);
   std::cout << str2 << std::endl;

   return 0;
}
