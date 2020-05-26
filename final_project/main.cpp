#include<iostream>
#include<vector>
#include<sstream>

void print_vector(std::vector<std::string> v)
{
   for(std::string s : v)
      std::cout << s << " ";
   std::cout << std::endl;
}

std::vector<std::string> split(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token; 
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {  
      tokens.push_back(token);
   }
   return tokens;
}



int main()
{
   std::string line;
   std::getline(std::cin,line);
   std::vector<std::string> v = split(line,',');
   print_vector(v);

   return 0;
}
