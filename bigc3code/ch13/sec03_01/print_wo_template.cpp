#include<iostream>

void print(std::ostream& out, int data[], int size)
{
    for(int i=0;i < size;i++)
    {
        out << data[i] << " ";
    }
    out << std::endl;
}

void print(std::ostream& out, double data[], int size)
{
    for(int i=0;i < size;i++)
    {
        out << data[i] << " ";
    }
    out << std::endl;
}

int main()
{
    int a[5] = {1,2,3,4,5};
    double d[5] = {1.1,2.2,3.3,4.4,5.5};
    print(std::cout,a,5);
    print(std::cout,d,5);
    return 0;
}