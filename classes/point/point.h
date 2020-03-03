#ifndef POINT_H
#define POINT_H

class Point
{
public:
   Point(double x,double y);

   void setX(double x);
   void setY(double y);
   double getX() const;
   double getY() const;

   double distance(const Point &p);
   
   void print() const;

   Point add(const Point &p);

private:
   double m_x;
   double m_y;

};

#endif
