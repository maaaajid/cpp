/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:06:20 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/09 04:17:58 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <cmath>

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
    Fixed  operator++(int n);
    Fixed&  operator--();
    Fixed  operator--(int n);
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