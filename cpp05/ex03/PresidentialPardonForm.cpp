#include "./PresidentialPardonForm.hpp"
#include "./AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("default", 25, 5) 
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name):AForm(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj):AForm(obj)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
    this->setsign(obj.getSigning());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const char *PresidentialPardonForm::PardonTooHighGrade::what() const throw()
{
    return("Pardon Form Has Higher Grade");
}

const char *PresidentialPardonForm::PardonTooLowGrade::what() const throw()
{
    return ("Pardon Form Has Lower Grade");
}

const char *PresidentialPardonForm::PardonFormNotSigned::what() const throw()
{
    return ("Pardon Form NOT signed");
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getExec() >= executor.getGrade() && getSigning() != 0)
    {
        std::cout << "Mr.Zaphod Beeblebrox pardoned " << this->getName() << std::endl;
    }
    else if (this->getExec() <= executor.getGrade())
    {
        throw PardonTooHighGrade();
    }
    else if (this->getSigning() == 0)
    {
        throw PardonFormNotSigned();
    }
}