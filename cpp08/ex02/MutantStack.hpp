#pragma once

#include <iostream>
#include <iterator>
#include <stack>
#include <algorithm>
#include <deque>
#include <stack>
#include <vector>

template <class T, class Container = std::deque<T>>
class MutantStack: public std::stack<T, Container>
{
public:
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