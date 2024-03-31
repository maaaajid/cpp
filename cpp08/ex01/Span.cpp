#include "Span.hpp"
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <exception>
#include <vector>

Span::Span():N(0){}

Span::Span(unsigned int n):N(n), vec(n) 
{
    this->vec.clear();
}

Span::Span(const Span &obj)
{
    this->N = obj.N;
    this->vec = obj.vec;
}

Span&   Span::operator=(const Span &obj)
{
    this->N = obj.N;
    this->vec = obj.vec;
    return (*this);
}

Span::~Span(){}

void    Span::addNumber(int n)
{
    try
    {
        if (vec.size() >= N )
            throw std::out_of_range("there is no space left in vector");
        else
            vec.push_back(n);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

long long     Span::longestSpan()
{
    try
    {
        if (vec.size() <= 1)
            throw std::out_of_range("longestSpan need at least 2 elements");
        else
        {
            std::vector<int>::iterator it = vec.begin();
            std::vector<int>::iterator it2 = vec.end() - 1;
            sort(vec.begin(), vec.end());
            if (*it >= *it2)
                return (*it - *it2);
            else
                return(*it2 - *it);
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << ", number of elements " ;
        return (vec.size());
    }

}

long long     Span::shortestSpan()
{
    try
    {
        if (vec.size() == 0 || vec.size() == 1)
            throw std::out_of_range("shortestSpan need at least 2 elements");
        long long tmp = 0;
        long long dist = INT32_MAX;
        sort(vec.begin(), vec.end());
        std::vector<int>::iterator it = vec.begin();
        std::vector<int>::iterator it2 = vec.begin() + 1;
        while (it2 < vec.end())
        {
            if (*it2 < 0)
                tmp = abs(*it + abs(*it2));
            else
                tmp = abs(*it - *it2);
            if (tmp < dist)
                dist = tmp;
            it++;
            it2++;
        }
        return dist;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << ", number of elements " ;
        return (vec.size());
    }
}

void    Span::printElement()
{
    std::vector<int>::iterator it = vec.begin();
    while (it < vec.end())
    {
        std::cout << *it++ << " ";
    }
    std::cout << std::endl;
}

void    Span::addInOnce()
{
    
    std::vector<int>::iterator it;
    for (it = vec.end() - 1; it < vec.end(); it++)
    {
        addNumber(rand()%1000);
    }
}