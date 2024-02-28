#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main()
{
    try 
    {
        Bureaucrat a("majid", 15);
        Form b("contract", 10, 150);
        a.increment();
        std::cout << b << std::endl;
        a.signForm(b);
        b.beSigned(a);
        std::cout << a << std::endl;
    }
    catch(std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
}