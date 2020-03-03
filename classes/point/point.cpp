#include<iostream>
#include<cmath>
#include "point.h"

Point::Point(double x,double y)
{
   m_x = x;
   m_y = y;
}

void Point::setX(double x)
{
   m_x = x;
}

void Point::setY(double y)
{
   m_y = y;
}

double Point::getX() const
{
   return m_x;
}

double Point::getY() const
{
   return m_y;
}

double Point::distance(const Point &p)
{
   return sqrt(pow(m_x - p.m_x,2) + pow(m_y - p.m_y,2));
}

Point Point::add(const Point &p)
{
   return Point(m_x+p.m_x,m_y+p.m_y);
}

void Point::print() const
{
   std::cout << "(" << m_x << "," << m_y << ")" << std::endl;
}
