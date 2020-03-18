#include <iostream>
#include "string.h"

using namespace std;

int spaces(String str)
{
   int count = 0;
   String space(" ");
   for (int i = 0; i < str.length(); i++)
   {
      if (str.substr(i, 1) == space) { count++; }
   }
   return count;
}

void do_something_with_string(const String &s)
{
   cout << s << endl; 
}

int main()
{
   String name("Mary Ann");
   
   name = name;

    /*
   String name("Mary Ann");
   String name2 = name; // Copy constructor
   String name3("Fred");
   name3 = name; // operator=

   int result = spaces(name);
   cout << "Spaces: " << result << endl;
   */
   do_something_with_string(name);
   
   return 0;
} // str and space are destroyed here
