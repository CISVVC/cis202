#include<iostream>
#include<list>
#include<set>
#include<string>

struct Word {
   Word() {};
   Word(std::string w) : word(w){};
   std::string word;
   const std::list<int> *line_numbers = new std::list<int>;
};

bool operator==(const Word &lhs,const Word &rhs) {
   return lhs.word == rhs.word;
}

bool operator<(const Word &lhs,const Word &rhs) {
   return lhs.word < rhs.word;
}

std::ostream& operator<<(std::ostream& ostr,const Word &w) {
   ostr << w.word;
   return ostr;
}

int main()
{
    Word w1,w2;
    std::set<Word> s;
    w1.word = "one";
    w2.word = "two";
    s.insert(w1);
    s.insert(w2);
    s.insert(Word("three"));
    s.insert(Word("four"));
    auto it = s.find(Word("three"));
    if(it != s.end())
    {
       it->line_numbers->push_back(10);
       it->line_numbers->push_back(11);
       it->line_numbers->push_back(12);
    }
    std::cout << "Line number for three:";
    for(auto line : *(it->line_numbers)){
      std::cout << line << std::endl;
    }


    if(w1 == w2) {
       std::cout << "They are equal" << std::endl;
    }
    else {
       std::cout << "They are not equal" << std::endl;
    }
    std::cout << w1 << std::endl;
    std::cout << s.size() << std::endl;
    for(auto word : s)
    {
       std::cout << word << std:: endl;
    }
    return 0;
}
