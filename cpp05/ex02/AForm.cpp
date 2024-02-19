#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

AForm::AForm(): Name("default"), GradeToSign(150), GradeToExecute(150)
{
    std::cout << "default constructor called" << std::endl;
    this->signing = 0;
}

AForm::AForm(std::string name, const unsigned int gts, const unsigned int stx)
    :Name(name), GradeToSign(gts), GradeToExecute(stx)
{
    std::cout << "parametrized constractur called" << std::endl;
    this->signing = 0;
    if (GradeToSign < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (GradeToSign > 150)
        throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(AForm &obj):Name(obj.Name), GradeToSign(obj.GradeToSign), GradeToExecute(obj.GradeToExecute)
{
    std::cout << "copy constractor called" << std::endl;
    *this = obj; 
}

AForm&   AForm::operator=( AForm &obj)
{
    std::cout << "copy assignement operator called" << std::endl;
    this->signing = obj.signing;
    return(*this);
}

AForm::~AForm()
{
    std::cout << "distructor called" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("AForm::GradeTooHighException");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("AForm::GradeTooLowException");
}

void AForm::beSigned(Bureaucrat &B)
{
    if (this->GradeToSign >= B.getGrade())
        this->signing = 1;
    else if (this->GradeToSign < B.getGrade())
        throw AForm::GradeTooHighException();
}

std::string AForm::getName( void ) const
{
    return (this->Name);
}

unsigned int    AForm::getGrade( void ) const
{
    return (this->GradeToSign);
}

bool    AForm::getSigning( void ) const
{
    return (this->signing);
}

std::ostream&   operator<<(std::ostream& out, const AForm &obj)
{
    out << obj.getName() << ", Form Grade to be singed " 
        << obj.getGrade() << ", Form Status " << obj.getSigning();
    return (out);
}


void    AForm::setsign(bool b)
{
    this->signing = b;
}