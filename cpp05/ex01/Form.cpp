#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

Form::Form(): Name("default"), GradeToSign(150), GradeToExecute(150)
{
    this->signing = 0;
}

Form::Form(std::string name, const unsigned int gts, const unsigned int stx)
    :Name(name), GradeToSign(gts), GradeToExecute(stx)
{
    this->signing = 0;
    if (GradeToSign < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (GradeToSign > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(Form const &obj):Name(obj.Name), GradeToSign(obj.GradeToSign), GradeToExecute(obj.GradeToExecute)
{
    *this = obj; 
}

Form&   Form::operator=( Form const &obj)
{
    this->signing = obj.signing;
    return(*this);
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form::GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form::GradeTooLowException");
}

void Form::beSigned(Bureaucrat const &B)
{
    if (this->GradeToSign >= B.getGrade())
        this->signing = 1;
    else if (this->GradeToSign < B.getGrade())
        throw Form::GradeTooHighException();
}

std::string Form::getName( void ) const
{
    return (this->Name);
}

unsigned int    Form::getGrade( void ) const
{
    return (this->GradeToSign);
}

bool    Form::getSigning( void ) const
{
    return (this->signing);
}

void    Form::setsign(bool b)
{
    this->signing = b;
}

std::ostream&   operator<<(std::ostream& out, const Form &obj)
{
    out << obj.getName() << ", Form Grade to be singed " 
        << obj.getGrade() << ", Form Status " << obj.getSigning();
    return (out);
}
