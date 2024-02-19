#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main()
{
    ShrubberyCreationFrom a("majid");
    Bureaucrat b("patron", 10);
    try
    {
        a.execute(b);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

}