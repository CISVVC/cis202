#include<iostream>
#include<string>
#include<unordered_map>

int main()
{
   std::unordered_map<std::string, double> scores;
   scores["Tom"] = 90;
   //You can read a score back with the same notation:
   std::cout << "Tom's score: " << scores["Tom"] << std::endl;
   // If the key is not present in the map, the [] operator automatically inserts the key and a default value. 
   // If you don’t want that (for example, because you have a constant reference to a map), use the at member function instead:
   std::cout << "Tom's score: " << scores.at("Tom") << std::endl;

   scores["Diana"] = 86;
   scores["Harry"] = 100;

	//finding a value in the map
	//To find out whether a key is present in the map, use the find member function. 
   //It yields an iterator that points to the entry with the given key, or past the end of the container 
   // if the key is not present. 
	std::unordered_map<std::string, double>::iterator pos = scores.find("Harry"); // Call find
	if (pos == scores.end()) // Check if there was a match
	{
		std::cout << "No match for Harry" << std::endl;
	}
	else {
		std::cout << "Harry's score: " << (*pos).second << std::endl; 
			// pos points to a pair<string, double>
	}


	// The following loop shows how you iterate over the contents of a map:
   for (pos = scores.begin(); pos != scores.end(); pos++) {
		std::cout << "The score of " << pos->first << " is " << 
				  pos->second << std::endl;

	}

	//To remove a key/value pair from a map, call the erase member function:

	scores.erase("Tom"); 
	// The following loop shows how you iterate over the contents of a map:
   for (auto v : scores) {
		std::cout << "The score of " << v.first << " is " << 
				  v.second << std::endl;

	}

   return 0;
}
