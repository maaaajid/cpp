#include "./AForm.hpp"
#include "./Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy reques", "Bender");
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}