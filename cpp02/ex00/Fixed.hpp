/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 00:46:43 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/05 03:36:48 by aelbouaa         ###   ########.fr       */
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
    Fixed(Fixed& old);
    Fixed&    operator=(Fixed& old);
    ~Fixed();
    int getRawBits( void );
    void setRawBits( int const raw );
};