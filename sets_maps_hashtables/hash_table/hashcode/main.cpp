#include<iostream>


const int SCALE = 10000;  // will give us the  last 4 digits

unsigned int hash_code(const std::string& str)
{
   unsigned long int h = 0;
   for (int i = 0; i < str.length(); i++)
   {
      h = 31 * h + str[i];
   }
   return h%SCALE;
}

const int LENGTH = 10000;
int main()
{
	std::string table[LENGTH];

	table[hash_code("eat")] = "eat";
	table[hash_code("tea")] = "tea";
	table[hash_code("drink tea")] = "drink tea";

	if(table[hash_code("eat")] != "")
	{
		std::cout << "eat is in the table at " << hash_code("eat")<< std::endl;
	}
	if(table[hash_code("tea")] != "")
	{
		std::cout << "tea is in the table at " << hash_code("tea") << std::endl;
	}

	std::cout << (hash_code("drink tea")) << std::endl;

	if(table[hash_code("drink tea")] != "")
	{
		std::cout << "drink tea is in the table at " 
			       << hash_code("drink tea")
					 << std::endl;
	}
	else {
		std::cout << "drink tea is not in the table" << std::endl;
	}

	return 0;
}
