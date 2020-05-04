#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <string>

class Node
{
private:
   std::string data;
   Node* left;
   Node* right;
friend class BinarySearchTree;   
};   

/*
   This class implements a binary search tree whose
   nodes hold strings.
*/
class BinarySearchTree
{
public:   
   /**
      Constructs an empty tree.
   */
   BinarySearchTree();
   
   /**
      Inserts a new node into the tree.
      @param element the element to insert
   */
   void insert(std::string element);

   /**
      Tries to find an element in the tree.
      @param element the element to find
      @return 1 if the element is contained in the tree
   */
   int count(std::string element) const;
   
   /**
      Tries to remove an element from the tree. Does nothing
      if the element is not contained in the tree.
      @param element the element to remove
   */
   void erase(std::string element);
   
   /**
      Prints the contents of the tree in sorted order.
   */
   void print() const;

private:   
   /**
      Prints a node and all of its descendants in sorted order.
      @param parent the root of the subtree to print
   */
   void print(Node* parent) const;

   /**
      Inserts a new node as a descendant of a given node.
      @param parent the root node
      @param new_node the node to insert
   */
   void add_node(Node* parent, Node* new_node) const;

   Node* root;
};

#endif
