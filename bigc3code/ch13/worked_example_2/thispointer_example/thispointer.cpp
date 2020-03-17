#include<iostream>

class A
{
public:
   void print_this();
};

void A::print_this()
{
	std::cout << this << std::endl;
}


int main()
{
	A a;
	a.print_this();
	std::cout << &a << std::endl;


	return 0;
}
