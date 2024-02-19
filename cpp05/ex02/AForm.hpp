#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
private:
    const std::string Name;
    bool    signing;
    const unsigned int GradeToSign;
    const unsigned int GradeToExecute;
public:
    AForm();
    AForm(std::string name, unsigned int gts, unsigned int gtx);
    AForm(AForm &obj);
    AForm&   operator=(AForm &obj);
    ~AForm();

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
    void            setsign(bool b);
    void            beSigned(Bureaucrat &B);
    virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream&   operator<<(std::ostream& out, const AForm &obj);