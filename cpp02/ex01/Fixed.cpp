/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 01:57:34 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/15 12:42:56 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    Number = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    Number = n << fruction;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    Number = roundf(n * (1 << fruction));  
}

Fixed::Fixed(const Fixed& old)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}

Fixed&    Fixed::operator=(const Fixed& old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        Number = old.Number;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void )
{
    std::cout << "getRawBits member function called" << std::endl;
    return (Number);
}

void    Fixed::setRawBits( int const raw)
{
    Number = raw;
}

int     Fixed::toInt( void ) const
{
    return (Number >> fruction);
}

float   Fixed::toFloat( void ) const
{
    return ((float)Number / (1 << fruction));
}

std::ostream&     operator<<(std::ostream& cout, const Fixed& fi)
{
    cout << fi.toFloat();
    return (cout);
}