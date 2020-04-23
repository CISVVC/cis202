#include<iostream>
#include<fstream>


const int SCALE = 100000;  // 

unsigned int hash_code(const std::string& str)
{
   unsigned long int h = 0;
   for (int i = 0; i < str.length(); i++)
   {
      h = 31 * h + str[i];
   }
   return h%SCALE;
}

const int LENGTH = 10000000;
int main()
{
   std::string word;
	std::string table[LENGTH];
   std::ifstream infile("alice.txt");
   int words = 0;
   int clash = 0;
   while(infile >> word) {
      if(table[hash_code(word)] == "")
      {
         table[hash_code(word)] = word;
      }
      else
      {
         clash++;
      }
      words++;
   }

   std::cout << "The number of words was: " << words << std::endl;
   std::cout << "The number of clashes was: " << clash << std::endl;

	return 0;
}
