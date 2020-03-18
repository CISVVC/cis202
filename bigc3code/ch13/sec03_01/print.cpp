#include <iostream>

using namespace std;

template<typename T>
void print(ostream& out, T data[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (i > 0) { out << ", "; }
      out << data[i];
   }
   out << endl;
}

class Point
{
public:
    Point(double x,double y) : m_x(x),m_y(y) {};
    double get_x() const {return m_x;};
    double get_y() const {return m_y;};
private:     
   double m_x;
   double m_y;
};

std::ostream& operator<<(std::ostream& o,const Point &p)
{
    o << "("  << p.get_x() << "," << p.get_y() << ")";
}

int main()
{
   int a[] = { 2, 4, 5 };
   double d[] = { 2.1, 4.1, 5.1 };
   print<int>(cout, a, 3);
   print<double>(cout, d, 3);
   Point p[2] = {Point(1,2),Point(2,2)};
   print<Point>(cout,p,2);
   
   return 0;
}
