#include "Iter.hpp"
#include <ostream>

class Test {
    public:
        int a;
        Test(int a) : a(a) {}
        Test() : a(0) {}
};

std::ostream& operator<<(std::ostream& os, Test t)
{
    os << t.a;
    return os;
}

void func(Test obj, int n)
{
    std::cout << obj << std::endl;
}

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    iter(a, 7, func);
    int x = 0;
    while (x < 7)
        std::cout << a[x++] << std::endl;

    double ar[4] = {4.6, 9.4, 7.6, 2.7};
    iter(ar, 4, func);
    x = 0;
    while (x < 4)
        std::cout << ar[x++] << std::endl;

    std::string arr[4] = {"hello, ", "world", " my name is ", "abdel majid"};
    iter(arr, 4, func);
    x = 0;
    while (x < 4)
        std::cout << arr[x++] << std::endl;

    Test tests[2];
    tests[0] = 10;
    tests[1] = 5;

    iter(tests, 2, func);
}

