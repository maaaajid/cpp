/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 01:57:54 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/07 21:29:52 by aelbouaa         ###   ########.fr       */
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
    Fixed&    operator=(const Fixed& old);
    ~Fixed();
    
    int     toInt( void ) const;
    float   toFloat( void ) const;
    int     getRawBits( void );
    void    setRawBits( int const raw );
};

std::ostream&     operator<<(std::ostream& cout, const Fixed& fi);