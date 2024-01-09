/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:05:44 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/09 04:17:53 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    Number = 0;
}
Fixed::Fixed(const int n)
{
    Number = n << fruction;
}

Fixed::Fixed(const float n)
{
    Number = roundf(n * (1 << fruction));  
}

Fixed::Fixed(const Fixed& old)
{
    *this = old;
}

Fixed&    Fixed::operator=(const Fixed& old)
{
    if (this != &old)
    {
        Number = old.Number;
    }
    return *this;
}

Fixed::~Fixed()
{
}

int     Fixed::getRawBits( void ) 
{
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

bool    Fixed::operator>(const Fixed& rhs) const
{
    if (this->Number > rhs.Number)
        return (true);
    return (false);
}

bool    Fixed::operator<(const Fixed& rhs) const
{
    if (this->Number < rhs.Number)
        return (true);
    return (false); 
}

bool    Fixed::operator>=(const Fixed& rhs) const
{
    if (this->Number >= rhs.Number)
        return (true);
    return (false); 
}

bool    Fixed::operator<=(const Fixed& rhs) const
{
    if (this->Number <= rhs.Number)
        return (true);
    return (false); 
}

bool    Fixed::operator==(const Fixed& rhs) const
{
    if (this->Number == rhs.Number)
        return (true);
    return (false); 
}

bool    Fixed::operator!=(const Fixed& rhs) const
{
    if (this->Number != rhs.Number)
        return (true);
    return (false); 
}

Fixed  Fixed::operator+(const Fixed& rhs)
{
    Fixed a;

    a.Number = this->Number + rhs.Number;
    return (a);
}

Fixed  Fixed::operator-(const Fixed& rhs)
{
    Fixed a;

    a.Number = this->Number - rhs.Number;
    return (a);
}

Fixed  Fixed::operator*(const Fixed& rhs)
{
    Fixed a;
     
    a.Number = this->Number * rhs.Number;
    a.Number = a.Number >> this->fruction;
    
    return (a);
}

Fixed  Fixed::operator/(const Fixed& rhs)
{
    Fixed a;

    this->Number = this->Number << this->fruction;
    a.Number = this->Number / rhs.Number;
    
    return (a);
}

Fixed&  Fixed::operator++()
{
    Number++;
    return (*this);
}

Fixed  Fixed::operator++(int n)
{
    (void)n;
    Fixed tmp = *this;
    ++Number;
    return (tmp);
}

Fixed&  Fixed::operator--()
{
    Number--;
    return (*this);
}

Fixed  Fixed::operator--(int n)
{
    (void)n;
    Fixed tmp = *this;
    --Number;
    return (tmp);
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a <= b)
        return (a);
    else
        return (b);
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a <= b)
        return (a);
    else
        return (b);
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a >= b)
        return (a);
    else
        return (b);
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a >= b)
        return (a);
    else
        return (b);
}