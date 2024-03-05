#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <vector>

int main()
{
    Span sp = Span(100);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printElement();
    std::cout << "########################" << std::endl;

    int arr[] = {1, 45, 56, 47, 32, 95,65, 98, 5,12, 19, 37, 25, 61, 28, 34, 26, 99};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));

    sp.addInOnce(v.begin(), v.end());
    sp.printElement();

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}