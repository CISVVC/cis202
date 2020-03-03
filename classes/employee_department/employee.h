#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

class Employee
{
public:
   Employee();
   Employee(std::string first,std::string last,std::string id);
   void set_firstname(std::string fname);
   void set_lastname(std::string lname);
   std::string get_firstname();
   std::string get_lastname();
   
   std::string to_string();

private:
   std::string m_id;
   std::string m_firstname;
   std::string m_lastname;
};
#endif
