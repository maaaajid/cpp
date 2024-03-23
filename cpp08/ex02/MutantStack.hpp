#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>
#include <stack>


template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
    MutantStack(){}
    MutantStack(MutantStack &obj):std::stack<T, Container>(obj){}
    MutantStack&    operator=(MutantStack &obj)
    {
        std::stack<T, Container>::operator=(obj);
        return(*this);
    }
    ~MutantStack(){};
    typedef typename Container::iterator iterator;
    iterator begin(void)
    {
        return (this->c.begin());
    }
    iterator end(void)
    {
        return (this->c.end());
    }

};