#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>
#include <ios>

class Intern
{
public:
    Intern();
    Intern(Intern &obj);
    Intern& operator=(Intern &obj);
    ~Intern();

    class   NotAForm: public std::exception
    {
        const char *what() const throw();
    };
    AForm   *makeForm(std::string form, std::string target);
};