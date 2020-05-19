#ifndef TASK_H
#define TASK_H

#include <string>


class Task
{
public:
   Task();
   Task(std::string description, int priority);  
   std::string get_description() const;
   int get_priority() const;
private:
   std::string description;
   int priority;
};

bool operator<(const Task& a, const Task& b);

#endif
