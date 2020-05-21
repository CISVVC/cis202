#include <iostream>
#include "binary_search_tree.h"

/*
   This program tests the binary search tree class.
*/
int main()
{  
   BinarySearchTree t;
   t.insert("D");
   t.insert("B");
   t.insert("A");
   t.insert("C");
   t.insert("F");
   t.insert("E");
   t.insert("I");
   t.insert("G");
   t.insert("H");
   t.insert("J");

   /*
    *                   D
    *                /    \
    *               B      F 
    *              / \    / \
    *             A   C  E   I
    *                       / \
    *                      G   J
    *                       \
    *                        H
    */
   //t.erase("H"); // Removing leaf
   t.erase("I"); // Removing leaf
   //t.erase("A"); // Removing leaf
   //t.erase("B"); // Removing element with one child
   //t.erase("F"); // Removing element with two children
   //t.erase("D"); // Removing root
   t.print();
   //std::cout << "Expected: C E G H I J" << std::endl;
   //std::cout << t.count("A") << " " << t.count("J") << std::endl;
   //std::cout << "Expected: 0 1" << std::endl;
   return 0;
}

