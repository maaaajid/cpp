#pragma once

#include <iostream>
#include <stack>
#include <algorithm>


template <class T>
class MutantStack: public std::stack<T>
{
public:
    MutantStack(){}
    MutantStack(MutantStack &obj):std::stack<T>(obj){}
    MutantStack&    operator=(MutantStack &obj)
    {
        if (this != &obj)
            std::stack<T>::operator=(obj);
        return(*this);
    }
    ~MutantStack(){};
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(void)
    {
        return (this->c.begin());
    }
    iterator end(void)
    {
        return (this->c.end());
    }
};