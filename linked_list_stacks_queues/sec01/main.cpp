#include <string>
#include <iostream>
#include <list>

using namespace std;

void print_list(const list<string> &l)
{
    for(list<string>::const_iterator p = l.begin();p != l.end();p++)
    {
       cout << *p  << " " << endl;
    }
    cout << endl;
   //for (const string& element : l)
/*   for (auto element : l)
      cout << element << " ";
   }
   */
   cout << endl;
}

int main()
{  
   list<string> names;

   names.push_back("Tom");
   names.push_back("Diana");
   names.push_back("Harry");
   names.push_back("Juliet");

   // Add a value in fourth place

   list<string>::iterator pos = names.begin();
   // Or auto pos = names.begin();
   //

   pos++;
   pos++;
   pos++;

   names.insert(pos, "Romeo");
   print_list(names);

   // Remove the value in second place

   pos = names.begin();
   pos++;

   names.erase(pos);
   print_list(names);

   return 0;
}

