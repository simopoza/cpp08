#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <list>

template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void)
        {
        }
        ~MutantStack(void)
        {
        }
        MutantStack<T>( const MutantStack<T> &obj)
        {
            *this = obj;
        }
        MutantStack<T>	&operator=( const MutantStack<T> &obj)
        {
            (void)obj;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator         begin()
		{
            return this->c.begin();
        }
   		iterator         end() 
		{
            return this->c.end();
        }
};

#endif