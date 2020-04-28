#include<iostream>
#include<string>
#include<stack>

template<class T>
class DataStack
{
   public:
      DataStack<T>(){};
      T top();
      void pop();
      void push(const T &t);

   private:
      std::stack<T> m_stack;
};

template<class T>
T DataStack<T>::top() {

}

template<class T>
void DataStack<T>::pop() {

}

template<class T>
void DataStack<T>::push(const T &t) {

}

int main()
{
   DataStack<std::string> st;

   st.push("one");
   st.push("two");
   st.push("three");
   std::cout << st.top() << std::endl;
   st.pop();
   std::cout << st.top() << std::endl;
   st.pop();
   std::cout << st.top() << std::endl;
   st.pop();
   st.pop();
   //std::cout << st.top() << std::endl;

   return 0;
}
