/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:46:43 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/15 03:33:26 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

class Fixed
{
private:
    int Number;
    static const int fruction = 8;
public:
    Fixed();
    Fixed(const Fixed &old);
    Fixed&    operator=(const Fixed &old);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};