#pragma once

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

class Form;

class Bureaucrat
{
    const std::string   Name;
    unsigned int        Grade;
public:
    Bureaucrat();
    Bureaucrat( std::string name, unsigned int grade );
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

    void            signForm(Form &obj);
    std::string     getName( void ) const;
    unsigned int    getGrade( void )const;
    void            increment( void );
    void            decrement( void );
};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& obj);