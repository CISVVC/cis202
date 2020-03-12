#include<iostream>


using namespace std;

void foo(int a)
{
   cout << "foo() "<< a << endl;
}

int main()
{

   int x = 10;

   foo(++x);
   cout << x << endl;
   foo(x++);
   cout << x << endl;
   return 0;
}
