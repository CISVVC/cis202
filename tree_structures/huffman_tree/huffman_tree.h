#ifndef HUFFMAN_TREE_H
#define HUFFMAN_TREE

#include <string>
#include <vector>
#include <unordered_map>


class Node
{
private:
   char character;
   int frequency;
   Node* left;
   Node* right;
friend class HuffmanTree;   
};

/*
   A tree for decoding Huffman codes.
*/
class HuffmanTree
{
public:
   /**
      Constructs a Huffman tree from given character frequencies.
      @param frequencies a map whose keys are the characters to be encoded
      and whose values are the frequencies of the characters
   */
   HuffmanTree(const std::unordered_map<char, int>& frequencies);
   /**
      Decodes an encoded std::string.
      @param input a std::string made up of 0 and 1
   */
   std::string decode(std::string input) const;

   std::unordered_map<char, std::string> encoding_map() const;

private:
   Node* remove_min(std::vector<Node*>& nodes) const;
   void fill_encoding_map(std::unordered_map<char, std::string>& map,
      std::string prefix, Node* n) const;   
   
   Node* root;   
};

#endif
