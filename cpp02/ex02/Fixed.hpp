/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 21:46:41 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/15 13:46:54 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <cmath>
#include <bitset>
class Fixed
{
private:
    int Number;
    static const int fruction = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed& old);
    Fixed&  operator=(const Fixed& old);
    bool    operator>(const Fixed& rhs) const;
    bool    operator<(const Fixed& rhs) const;
    bool    operator>=(const Fixed& rhs) const;
    bool    operator<=(const Fixed& rhs) const;
    bool    operator==(const Fixed& rhs) const;
    bool    operator!=(const Fixed& rhs) const;
    Fixed  operator+(const Fixed& rhs);
    Fixed  operator-(const Fixed& rhs);
    Fixed  operator*(const Fixed& rhs);
    Fixed  operator/(const Fixed& rhs);
    Fixed&  operator++();
    Fixed  operator++(int);
    Fixed&  operator--();
    Fixed  operator--(int);
    ~Fixed();
    
    int     toInt( void ) const;
    float   toFloat( void ) const;
    int     getRawBits( void );
    void    setRawBits( int const raw );
    static Fixed&  min(Fixed& a, Fixed& b);
    static const Fixed&  min(const Fixed& a, const Fixed& b);
    static Fixed&  max(Fixed& a, Fixed& b);
    static const Fixed&  max(const Fixed& a, const Fixed& b);
};

std::ostream&     operator<<(std::ostream& cout, const Fixed& fi);