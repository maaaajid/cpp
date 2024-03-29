/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 01:37:16 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/15 03:33:20 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    Number = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}
Fixed&    Fixed::operator=(const Fixed& old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        Number = old.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (Number);
}

void    Fixed::setRawBits( int const raw)
{
    Number = raw;
}
