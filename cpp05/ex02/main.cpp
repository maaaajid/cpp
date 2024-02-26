#include "./AForm.hpp"
#include "./Bureaucrat.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include <exception>

int main()
{
    AForm *c;
    c = new ShrubberyCreationForm("yassin");
    // ShrubberyCreationForm a("farm");
    RobotomyRequestForm robo("factory");
    // PresidentialPardonForm pardon("frtelan");
    Bureaucrat b("patron", 15);
    // try
    // {
    //     b.signForm(a);
    //     b.executeForm(*c);

    // }
    // catch(std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    b.signForm(*c);
    b.executeForm(*c);
    try
    {
        b.signForm(robo);
        robo.execute(b);
        robo.execute(b);
        robo.execute(b);
        robo.execute(b);
    }
    catch(std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
    // try
    // {
    //     b.signForm(pardon);
    //     pardon.execute(b);
    // }
    // catch(std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    delete c;

}