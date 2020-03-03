#include<iostream>

#include "department.h"

Department::Department(std::string id,std::string name) :
 m_id(id),m_name(name)
{ }


std::string Department::to_string()
{
   return m_id + ":" + m_name;
}

void Department::add_employee(Employee *e)
{
   m_employees.push_back(e);
}

void Department::remove_employee(Employee *e)
{
}

void Department::print_employees()
{
   std::cout << m_name << std::endl;
   for(auto e : m_employees)
      std::cout << "    "<< e->to_string() << std::endl;

}
