#include "./AForm.hpp"
#include "./Bureaucrat.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include <exception>

int main()
{
    try
    {
        AForm *c;
        c = new ShrubberyCreationForm("farm");
        RobotomyRequestForm robo("factory");
        PresidentialPardonForm pardon("frtelan");
        Bureaucrat b("patron", 5);
        b.signForm(*c);
        b.executeForm(*c);
        b.signForm(robo);
        b.executeForm(robo);
        b.executeForm(robo);
        b.executeForm(robo);
        b.executeForm(robo);
        b.executeForm(robo);
        b.executeForm(robo);
        b.signForm(pardon);
        b.executeForm(pardon);
        delete c;
    }
    catch(std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
}