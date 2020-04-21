#include <iostream>
#include <fstream>
#include <string>
#include "hashtable.h"

using namespace std;

/**
   Reads all words from a given file into a hash table.
   @param filename the name of the file from which to read the words
   @return a hash table containing all words found in the file, with
   letters turned into lowercase
 */
HashTable read_words(string filename)
{
   ifstream in(filename);
   const int BUCKETS = 101;
   HashTable result(BUCKETS);
   string input;
   while (in >> input)
   {
      // Make letters lowercase and split at non-letters
      string word;
      for (int i = 0; i < input.length(); i++)
      {
         char ch = input[i];
         if ('a' <= ch && ch <= 'z')
         {
            word = word + ch;
         }
         else if ('A' <= ch && ch <= 'Z')
         {
            ch = ch + 'a' - 'A';
            word = word + ch;
         }
         else
         {
            result.insert(word);
            word = "";
         }
      }
      result.insert(word);
   }
   // An empty word might have been inserted if an input had
   // non-letter characters that were adjacent or at the beginning
   // or end of the input.
   result.erase("");

   return result;
}

int main()
{
   HashTable dictionary = read_words("words.txt");
   HashTable book = read_words("alice.txt");
   for (Iterator iter = book.begin(); !iter.equals(book.end()); iter.next())
   {
      if (dictionary.count(iter.get()) == 0)
      {
         cout << iter.get() << endl;
      }
   }
}
