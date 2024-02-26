#include "./AForm.hpp"
#include "./Bureaucrat.hpp"
#include <string>

AForm::AForm(): Name("default"), signing(0), GradeToSign(150), GradeToExecute(150)
{
}

AForm::AForm(std::string name, const unsigned int gts, const unsigned int stx)
    :Name(name), signing(0), GradeToSign(gts), GradeToExecute(stx)
{
    if (GradeToSign < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (GradeToSign > 150)
        throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(AForm &obj):Name(obj.Name), GradeToSign(obj.GradeToSign), GradeToExecute(obj.GradeToExecute)
{
    *this = obj; 
}

AForm&   AForm::operator=( AForm &obj)
{
    this->signing = obj.signing;
    return(*this);
}

AForm::~AForm()
{
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

unsigned int     AForm::getExec( void ) const
{
    return (this->GradeToExecute);
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