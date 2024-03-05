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
        if (vec.size() == 0 || vec.size() == 1)
            throw std::out_of_range("longestSpan need at least 2 elements");
        else
        {
            std::vector<int>::iterator it = vec.begin();
            std::vector<int>::iterator it2 = vec.end() - 1;
            std::sort(vec.begin(), vec.end());
            if (*it >= *it2)
                return (*it - *it2);
            else
                return(*it2 - *it);
        }
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (0);
    }

}

long long     Span::shortestSpan()
{
    try
    {
        if (vec.size() == 0 || vec.size() == 1)
            throw std::out_of_range("shortestSpan need at least 2 elements");
        long long min = 2147483647;
        sort(vec.begin(), vec.end());
        std::vector<int>::iterator it = vec.begin();
        std::vector<int>::iterator it2 = vec.begin();
        while (it < vec.end())
        {
            it2 = it + 1;
            while (it2 < vec.end())
            {
                if (*it < *it2 && min > *it2 - *it)
                    min = *it2 - *it;
                else if (*it >= *it2 && min > *it - *it2)
                    min = *it - *it2;
                it2++;
            }
            it++;
            it2 = it;
        }
        return min;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (0);
    }
}

void    Span::printElement()
{
    std::vector<int>::iterator it = vec.begin();
    while (it < vec.end())
    {
        std::cout << *it++ << std::endl;
    }
    std::cout << vec.size() << std::endl;
}

void    Span::addInOnce(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it < end; it++)
    {
        addNumber(*it);
    }
}