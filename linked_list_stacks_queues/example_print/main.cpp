#include<iostream>
#include<string>
#include<list>


class A
{
public:
   std::string get_data() {return "Some Data";}
};

void print_list(const std::list<A> &l) {
   for(auto node : l)
      std::cout << node.get_data() << std::endl;
}

int main()
{
   
    std::list<A> l;
    l.push_back(A()); 
    l.push_back(A()); 
    l.push_back(A()); 
    l.push_back(A()); 

    print_list(l);
    return 0;
}
