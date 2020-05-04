#include <iostream>
#include <string>
#include "tree.h"


// Count short names with visitor
class Printer : public Visitor
{
public:    
   virtual void visit(std::string data);
};

void Printer::visit(std::string data)
{
   std::cout << data << " ";
}

class ShortNameCounter : public Visitor
{
public:    
   virtual void visit(std::string data);
   int get() const;
private:   
   int counter = 0;
};

void ShortNameCounter::visit(std::string data)
{
   if (data.length() <= 5) { counter++; }
}

int ShortNameCounter::get() const
{
   return counter;
}

/*
   This program demonstrates tree traversal.
*/
int main()
{
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);

   std::cout << "Preorder: ";
   Printer v1;
   t1.preorder(v1);
   std::cout << std::endl;
   ShortNameCounter v2;
   t1.preorder(v2);
   std::cout << "Short names: " << v2.get() << std::endl;
   std::cout << "Postorder: ";
   t1.postorder(v1);
   std::cout << std::endl;

   // Print and count short names with breadth first iterator
   
   int counter = 0;
   std::cout << "Breadth first: ";
   for (BreadthFirstIterator iter = t1.begin();
        !iter.equals(t1.end()); iter.next())
   {
      std::string data = iter.get();
      std::cout << data << " ";
      if (data.length() <= 5) { counter++; }
   }
   std::cout << std::endl;
   std::cout << "Short names: " << counter << std::endl;
}
