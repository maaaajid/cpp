#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <exception>
#include <stdexcept>

Intern::Intern(){};
Intern::Intern(Intern &obj)
{
    *this = obj;
}

Intern& Intern::operator=(Intern &obj)
{
    (void)obj;
    return (*this);
}
Intern::~Intern(){}

const char  *Intern::NotAForm::what() const throw()
{
    return ("this is not a form");
}


AForm   *Intern::makeForm(std::string form, std::string target)
{

    int x = 0;
    AForm *ptr = NULL;
    std::string arg[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    while (form != arg[x] && x < 4)
        x++;
    if (x < 3)
        std::cout << "Intern creates " << arg[x] << std::endl;
    switch (x) 
    {
        case 0:
            ptr =  new RobotomyRequestForm(target);
            break;
        case 1:
            ptr = new ShrubberyCreationForm(target);
            break;
        case 2:
            ptr = new PresidentialPardonForm(target);
            break;
        default:
            throw Intern::NotAForm();
    }
    return (ptr);
}