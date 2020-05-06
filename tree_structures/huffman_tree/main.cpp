#include <iostream>
#include <string>
#include <unordered_map>
#include "huffman_tree.h"


std::string encode(std::string to_encode,
   const std::unordered_map<char, std::string>& encoding_map)
{
   std::string result = "";
   for (int i = 0; i < to_encode.length(); i++)
   {
      char ch = to_encode[i];
      std::string encoded = encoding_map.at(ch);
      result = result + encoded;
   }
   return result;
}

int main()
{
   std::unordered_map<char, int> frequency_map;
   frequency_map['A'] = 2089;
   frequency_map['E'] = 576;
   frequency_map['H'] = 357;
   frequency_map['I'] = 671;
   frequency_map['K'] = 849;
   frequency_map['L'] = 354;
   frequency_map['M'] = 259;
   frequency_map['N'] = 660;
   frequency_map['O'] = 844;
   frequency_map['P'] = 239;
   frequency_map['U'] = 472;
   frequency_map['W'] = 74;
   frequency_map['\''] = 541;
   HuffmanTree tree(frequency_map);

   std::unordered_map<char, std::string> encoding_map = tree.encoding_map();
   std::string encoded = encode("ALOHA", encoding_map);
   std::cout << encoded << std::endl;
   std::string decoded = tree.decode(encoded);
   std::cout << decoded << std::endl;
   encoded = encode("WIKIWIKI", encoding_map);
   std::cout << encoded << std::endl;
   decoded = tree.decode(encoded);
   std::cout << decoded << std::endl;
   return 0;
}
