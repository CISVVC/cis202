/**
 * header comments
 */
#ifndef STACK_HPP
#define STACK_HPP

#include<vector>

template<class T>
class Stack 
{
   public:
      Stack<T>();
      ~Stack<T>();
      T top();
      void pop();
      void push(T item);
      int size();
   private:
      std::vector<T> m_stack_data;
};

template<class T> 
Stack<T>::Stack() 
{
}

template<class T> 
Stack<T>::~Stack()
{
}

template<class T> 
T Stack<T>::top()
{
   if(m_stack_data.size() <= 0)
      throw "we have a problem"; 
   return m_stack_data.back();
}

template<class T> 
void Stack<T>::pop()
{
   m_stack_data.pop_back();
}

template<class T> 
void Stack<T>::push(T item)
{
   m_stack_data.push_back(item);
}

template<class T> 
int Stack<T>::size()
{
   return m_stack_data.size(); 
}

#endif
