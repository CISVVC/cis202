#include<iostream>
struct Term {
   double c;
   int power;
};

class Polynomial
{
public:
   void add(const Term &t) {
      t.c
      t.power
   }

   void add(const Polynomial &p) {
      std::list<Term>  l = p.get_terms();
   }

   std::list<Term> get_terms() {
      // return a list of the terms that are stored in this Polynomial
   }
private:
   std::list<Term> m_terms;
}

int main()
{
    return 0;
}
