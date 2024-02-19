/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:48:10 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/02/19 03:13:57 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ostream>

Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor called" << std::endl;
    this->Grade = 10;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade): Name(name)
{
    std::cout << "parametrized constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->Grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj):Name(obj.Name)
{
    std::cout << "copy constructor called" <<std::endl;
    this->Grade = obj.Grade;
}

Bureaucrat  Bureaucrat::operator=( const Bureaucrat& obj)
{
    std::cout << "copy assignement operator called" << std::endl;
    this->Grade = obj.Grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "distructor called" << std::endl;
}

std::string Bureaucrat::getName( void ) const
{
    return (this->Name);
}

unsigned int    Bureaucrat::getGrade( void ) const
{
    return (this->Grade);
}

void    Bureaucrat::increment( void )
{
    if (Grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        Grade--;
}

void    Bureaucrat::decrement( void )
{
    if (Grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        Grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

std::ostream&operator<<(std::ostream& out, const Bureaucrat& obj)
{
    out << obj.getName() << ", Bureaucrat grade " << obj.getGrade();
    return (out);
}

void    Bureaucrat::signForm(Form &obj)
{
    if (obj.getSigning() != 0)
        std::cerr << this->Name << ", couldn't sing " << obj.getName() << " is already signed" << std::endl;
    else if (this->Grade > obj.getGrade())
        std::cerr << this->Name << ", couldn't sing " << obj.getName() << " is higher grade " << std::endl;
    else if (this->Grade <= obj.getGrade())
        std::cout << this->getName() << ", signed " << obj.getName() << std::endl;
}