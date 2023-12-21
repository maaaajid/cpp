#include <iostream>

int main()
{
    std::string a = "zabi";
    std::string &b = a;
    std::cout << b << " | " << a << '\n';
    std::cout << &b << " | " << &a << '\n';
    std::string c ="hello";
    b = c;
    std::cout << b << " | " << a << '\n';
    std::string *p = &a;
    std::cout << *p << " | " << a << '\n';
    std::cout << p << " | " << &a << '\n';
    
}