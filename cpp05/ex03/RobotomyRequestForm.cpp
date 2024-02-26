#include "Bureaucrat.hpp"
#include "./RobotomyRequestForm.hpp"
#include <string>


RobotomyRequestForm::RobotomyRequestForm():AForm("default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name):AForm(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj):AForm(obj)
{
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
    this->setsign(obj.getSigning());
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

const char  *RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return ("Roboto has Low grade");
}

const char  *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return ("Roboto has high grade");
}

const char  *RobotomyRequestForm::RobotoFormNotSigned::what() const throw()
{
    return ("Roboto Form Not Signed");
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    static int i;
    if (this->getExec() >= executor.getGrade() && this->getSigning() != 0)
    {
        if (i % 2 == 0)
            std::cout << this->getName() << " has been robotomized successfully" << std::endl;
        else 
            std::cout << this->getName() << " failed to be robotomized" << std::endl;
        i++;
    }
    else if (this->getExec() <= executor.getGrade())
        throw RobotomyRequestForm::GradeTooHighException();
    else if (this->getSigning() == 0)
        throw RobotomyRequestForm::RobotoFormNotSigned();
}