#include<iostream>


class Term
{
   int coeff;
   int power;
};

class Polynomial
{
public:
   Polynomial(const Term &t);

   void add(const Term &t) {
   }

   void add(const Polynomial &p) {
      std::list<Term>  l = p.get_terms();
   }

   std::list<Term> get_terms() {
      // return a list of the terms that are stored in this Polynomial
   }

// there is a list of terms that the Polynomial manages
private:
   std::list<Term> m_terms;

};

int main()
{
   Polynomial p(Term(2,3));
   p.add(Polynomial(Term(3,3)));
    return 0;
}
