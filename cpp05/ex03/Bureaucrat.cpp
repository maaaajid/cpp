/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:48:10 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/02/22 18:19:57 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <ostream>

Bureaucrat::Bureaucrat():Name("default"), Grade(97)
{
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade): Name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->Grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj):Name(obj.Name)
{
	this->Grade = obj.Grade;
}

Bureaucrat  Bureaucrat::operator=( const Bureaucrat& obj)
{
	this->Grade = obj.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
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

void    Bureaucrat::signForm(AForm &obj)
{
	try
	{
		if (this->Grade <= obj.getGrade())
		{
			obj.setsign(1);
			std::cout << this->getName() << ", signed " << obj.getName()  << " form." << std::endl;
		}
		else if (this->Grade > obj.getGrade())
		{
			std::cerr << this->Name << ", couldn't sing form " << obj.getName() << " ";
			throw Bureaucrat::GradeTooLowException();	
		}
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}

void    Bureaucrat::executeForm(AForm const & form) const 
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
}