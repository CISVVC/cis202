#include<iostream>

#include "employee.h"
#include "department.h"



int main()
{
   Employee e1("Fred","Flintstone","000001");
   Employee *ePtr = new Employee("Barney","Rubble","000002");
   Department *d = new Department("01","Rock Crushers");

   d->add_employee(&e1);
   d->add_employee(ePtr);
   d->add_employee(new Employee("Wilma","Flintstone","000003"));

   d->print_employees();

    std::cout << e1.to_string() << std::endl;

    std::cout << ePtr->to_string() << std::endl;

    return 0;
}
