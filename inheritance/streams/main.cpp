#include<iostream>
#include<fstream>


void process_output(std::ostream &o)
{
   o << "Hello World" << std::endl;
}

int main()
{
   std::ofstream f("out.txt");
  
   process_output(std::cout);

   process_output(f);

   return 0;
}
