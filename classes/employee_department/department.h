#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<string>
#include<vector>
#include "employee.h"

class Department
{
public:
   Department(std::string id,std::string name);
   
   void add_employee(Employee *e);
   void remove_employee(Employee *e);
   void print_employees();

   std::string to_string();

private:
   std::string m_id;
   std::string m_name;
   std::vector<Employee*> m_employees;
};

#endif
