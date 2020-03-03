#include "employee.h"

Employee::Employee()
{
  m_lastname = "No Name";
  m_firstname = "No Name";
  m_id = "0";
}

Employee::Employee(std::string first,std::string last,std::string id) :
   m_firstname(first),
   m_lastname(last),
   m_id(id)

{ }

void Employee::set_firstname(std::string fname)
{
   m_firstname = fname;
}

void Employee::set_lastname(std::string lname)
{
   m_lastname = lname;
}

std::string Employee::get_firstname()
{
   return m_firstname;
}

std::string Employee::get_lastname()
{
   return m_lastname;
}

std::string Employee::to_string()
{
   return m_lastname + "," + m_firstname + "," + m_id;
}

