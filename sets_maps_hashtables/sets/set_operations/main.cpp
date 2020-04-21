#include<iostream>
#include<unordered_set>

void print(const std::unordered_set<std::string> &container)
{
   for(auto c : container)
      std::cout << c << " ";
   std::cout << std::endl;
}

int main()
{
   std::unordered_set<std::string> fruit;

   fruit.insert("Apples");
   fruit.insert("Oranges");
   fruit.insert("Grapes");
   fruit.insert("Apples"); // Has no effect: "Apples" is already in the set
   print(fruit);

   fruit.erase("Apples"); 
   fruit.erase("Apples"); // Has no effect: "Apples" is no longer in the set

   print(fruit);


   std::unordered_set<std::string> names;
   names.insert("Tom");
   names.insert("Diana");
   names.insert("Harry");

   std::unordered_set<std::string>::iterator pos;
   for (pos = names.begin(); pos != names.end(); pos++) {
      std::cout << *pos << " ";
   }
   std::cout << std::endl;

   // or you can use the auto keyword
   for (auto pos = names.begin(); pos != names.end(); pos++) {
            std::cout << *pos << " ";
   }
   std::cout << std::endl;

   // the enhanced for loop works as well
   for (auto name : names) {
            std::cout << name << " ";
   }
   std::cout << std::endl;
   

   auto f = fruit.find("Grapes");
   if(f != fruit.end())
   {
      std::cout << *f << " is in the set" << std::endl;
   }

   // of course, you could use the print function that was shown earlier

   return 0;
}
