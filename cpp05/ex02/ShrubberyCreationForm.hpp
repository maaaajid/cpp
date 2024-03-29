#pragma once

#include "./Bureaucrat.hpp"
#include "./AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const name);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm&  operator=(ShrubberyCreationForm  const &obj);

    class GradeTooLowException : public AForm::GradeTooLowException
    {
        public:
            const char *what() const throw();
    };
    class GradeTooHighException : public AForm::GradeTooHighException
    {
        public:
            const char *what() const throw();
    };
    class ShrubberyFormNotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
    void            execute(Bureaucrat const & executor) const;

};