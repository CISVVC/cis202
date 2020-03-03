#include<iostream>


class Counter
{
public:
   void reset();
   void count();
   int get_value() const;

private:
   int m_value;
};

void Counter::reset()
{
   m_value = 0;
}

void Counter::count()
{
   m_value += 1;
}

int Counter::get_value() const
{
   return m_value;
}


int main()
{
   Counter c;
   c.m_value = 10;
   c.reset();
   c.count();
   c.count();
   c.count();
   std::cout << c.get_value() << std::endl;
   return 0;
}
