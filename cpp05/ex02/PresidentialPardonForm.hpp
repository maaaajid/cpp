#pragma once

#include "./AForm.hpp"
#include "./Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const name);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    PresidentialPardonForm& operator=(PresidentialPardonForm const &obj);
    ~PresidentialPardonForm();

    class PardonTooHighGrade: public AForm::GradeTooHighException
    {
        const char *what() const throw();
    };
    class PardonTooLowGrade: public AForm::GradeTooHighException
    {
        const char *what() const throw();
    };
    class PardonFormNotSigned: public std::exception
    {
        const char *what() const throw();
    };

    void    execute(Bureaucrat const & executor) const;
};