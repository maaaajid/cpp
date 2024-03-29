#pragma once

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

class AForm;

class Bureaucrat
{
    const std::string   Name;
    unsigned int        Grade;
public:
    Bureaucrat();
    Bureaucrat( std::string const name, const unsigned int grade );
    Bureaucrat( const Bureaucrat& obj );
    Bureaucrat  operator=( const Bureaucrat& obj );
    ~Bureaucrat();

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

    void            signForm(AForm &obj) const;
    std::string     getName( void ) const;
    unsigned int    getGrade( void )const;
    void            increment( void );
    void            decrement( void );
    void            executeForm(AForm const &form) const;

};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);