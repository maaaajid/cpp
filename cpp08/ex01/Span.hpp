#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include <algorithm>


class Span
{
    unsigned int N;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &obj);
    Span&   operator=(const Span &obj);
    ~Span();

    void        addNumber(int n);
    long long   longestSpan();
    long long   shortestSpan();
    void        printElement();
    void        addInOnce(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
