#pragma once

#include "./AForm.hpp"


class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm &obj);
    RobotomyRequestForm&    operator=(RobotomyRequestForm &obj);
    ~RobotomyRequestForm();

    class   GradeTooHighException: public AForm::GradeTooHighException
    {
        const char *what() const throw();
    };
    class   GradeTooLowException: public AForm::GradeTooLowException
    {
        const char *what() const throw();
    };
    class   RobotoFormNotSigned: public std::exception
    {
        const char *what() const throw();
    };

    void    execute(Bureaucrat const & executor) const;
};