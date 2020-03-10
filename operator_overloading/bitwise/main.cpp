#include<iostream>


using namespace std;


int main()
{
   unsigned char a = static_cast<unsigned char>(0xa1);
   // 10100001  161
   // 01011110  94

   cout << (int)(a) << endl;
   cout << (0xFF & (~a)) << endl;

    return 0;
}
