#include<iostream>
#include<set>

void print(const std::set<std::string> &container)
{
   for(auto c : container)
      std::cout << c << " ";
   std::cout << std::endl;
}

int main()
{
   std::set<std::string> fruit;

   fruit.insert("Apples");
   fruit.insert("Oranges");
   fruit.insert("Apples"); // Has no effect: "Apples" is already in the set
   print(fruit);

   fruit.erase("Apples"); 
   fruit.erase("Apples"); // Has no effect: "Apples" is no longer in the set

   print(fruit);

   return 0;
}
