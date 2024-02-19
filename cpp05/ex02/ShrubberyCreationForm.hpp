#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>

class   ShrubberyCreationFrom: public AForm
{
public:
    ShrubberyCreationFrom();
    ShrubberyCreationFrom(std::string name);
    ShrubberyCreationFrom(ShrubberyCreationFrom &obj);
    ~ShrubberyCreationFrom();
    ShrubberyCreationFrom&  operator=(ShrubberyCreationFrom &obj);

    // std::string     getName( void ) const;
    // unsigned int    getGrade( void ) const;
    // unsigned int    getExec( void ) const;

    void            execute(Bureaucrat const & executor) const;
};