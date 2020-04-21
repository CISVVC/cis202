#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <utility>

using namespace std;

int main()
{
   unordered_multiset<string> names;
   names.insert("Romeo");
   names.insert("Juliet");
   names.insert("Romeo"); // Now names.count("Romeo") is 2
   cout << "Count of Romeo: " << names.count("Romeo") << endl;
   cout << "Count of Juliet: " << names.count("Juliet") << endl;
   names.erase("Juliet"); // Now names.count("Juliet") is 0
   cout << "Count of Juliet: " << names.count("Juliet") << endl;
   names.erase("Juliet");
      // Has no effect: "Juliet" is no longer in the bag
   cout << "Count of Juliet: " << names.count("Juliet") << endl;

   unordered_multimap<string, string> friends;
   friends.insert(make_pair("Tom", "Diana")); // Diana is a friend of Tom
   friends.insert(make_pair("Tom", "Harry")); // Harry is also a friend of Tom

   auto tom_range = friends.equal_range("Tom");
      // pair<unordered_multimap<string, string>::iterator>
   cout << "Tom's friends: ";
   for (auto pos = tom_range.first; pos != tom_range.second; pos++)
   {
      cout << pos->second << " ";
   }
   cout << endl;

   bool found = false;
   for (auto pos = tom_range.first; !found && pos != tom_range.second; pos++)
   {
      if (pos->second == "Diana")
      {
         found = true;
         friends.erase(pos);
         cout << "Diana is no longer a friend of Tom" << endl;
      }      
   }
   
   cout << "Number of Tom's remaining friends: "
      << friends.count("Tom") << endl;
   
   return 0;
}
