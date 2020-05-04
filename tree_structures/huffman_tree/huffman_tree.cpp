#include "huffman_tree.h"

HuffmanTree::HuffmanTree(const std::unordered_map<char, int>& frequencies) 
{
   std::vector<Node*> nodes;
   for (auto iter = frequencies.begin(); iter != frequencies.end(); iter++)
   {
      Node* new_node = new Node;
      new_node->character = iter->first;
      new_node->frequency = iter->second;
      new_node->left = nullptr;
      new_node->right = nullptr;
      nodes.push_back(new_node);
   }

   while (nodes.size() > 1)
   {
      Node* smallest = remove_min(nodes);
      Node* next_smallest = remove_min(nodes);
      Node* new_node = new Node;
      new_node->frequency
         = smallest->frequency + next_smallest->frequency;
      new_node->left = smallest;
      new_node->right = next_smallest;
      nodes.push_back(new_node);
   }

   root = nodes[0];      
}

std::string HuffmanTree::decode(std::string input) const
{
   std::string result = "";
   Node* n = root;
   for (int i = 0; i < input.length(); i++)
   {
      char ch = input[i];
      if (ch == '0')
      {
         n = n->left;
      }
      else
      {
         n = n->right;
      }
      if (n->left == nullptr) // n is a leaf
      {
         result = result + n->character;
         n = root;
      }
   }
   return result;
}

std::unordered_map<char, std::string> HuffmanTree::encoding_map() const
{
   std::unordered_map<char, std::string> map;
   fill_encoding_map(map, "", root);
   return map;
}

void HuffmanTree::fill_encoding_map(std::unordered_map<char, std::string>& map,
   std::string prefix, Node* n) const
{
   if (n == nullptr) return;
   if (n->left == nullptr) // it's a leaf
   {
      map[n->character] = prefix;
   }
   else
   {
      fill_encoding_map(map, prefix + "0", n->left);
      fill_encoding_map(map, prefix + "1", n->right);
   }
}

Node* HuffmanTree::remove_min(std::vector<Node*>& nodes) const
{
   int last = nodes.size() - 1;
   if (last == -1) { return nullptr; }
   int min_pos = 0;
   for (int i = 1; i <= last; i++)
   {
      if (nodes[i]->frequency < nodes[min_pos]->frequency)
      {
         min_pos = i;
      }
   }
   Node* result = nodes[min_pos];
   nodes[min_pos] = nodes[last];
   nodes.pop_back();
   return result;
}
