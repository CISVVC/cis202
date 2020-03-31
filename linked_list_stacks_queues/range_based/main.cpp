#include<iostream>
#include<string>
#include<vector>
#include<list>


using namespace std;

template<typename T>
void print_container(const std::string title,const T &v)
{
   std::cout << "iterating over c++ array" << std::endl;
   for(auto i : v)
      std::cout << i << std::endl;
}

int main()
{
   int a[] = {1,2,3,4};
   std::vector<int> v = {1,2,3,4};
   std::list<int> l = {1,2,3,4};
   
   print_container("iterating over c++ array",a);
   print_container("iterating over a vector",v);
   print_container("iterating over a list",l);


   return 0;
}
