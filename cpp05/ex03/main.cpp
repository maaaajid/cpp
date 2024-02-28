#include "./AForm.hpp"
#include "./Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat b("patron", 3);
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        b.signForm(*rrf);
        rrf->execute(b);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}