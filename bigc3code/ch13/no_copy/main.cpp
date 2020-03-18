#include<iostream>

class A
{
public:
	A();
	A(const A &a) = delete;
	A& operator=(const A &a) = delete;

private:
	int *m_data;
};

A::A()
{
   m_data = new int[5];
}

int main()
{
	A a = A();
	return 0;
}
