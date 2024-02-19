#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string Name;
    bool    signing;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;
public:
    Form();
    Form(std::string name, const unsigned int gts, const unsigned int stx);
    Form(Form &obj);
    Form&   operator=(Form &obj);
    ~Form();

    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    unsigned int    getGrade() const;
    std::string     getName() const;
    bool            getSigning() const;
    void            beSigned(Bureaucrat &B);
};

std::ostream&   operator<<(std::ostream& out, const Form &obj);