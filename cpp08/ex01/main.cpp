#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <vector>

int main()
{
    Span sp = Span(1000);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "--------------------------------" << std::endl;

    // sp.addInOnce();
    // sp.printElement();
    return 0;
}