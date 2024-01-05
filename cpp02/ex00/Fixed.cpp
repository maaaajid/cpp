/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 01:37:16 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/05 01:48:46 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed& old)
{
    Number = old.Number;
    std::cout << "Copy constructor called" << std::endl;
}
void    Fixed::operator=(Fixed& old) {
    if (this != &old)
    {
        Number = old.Number;
    }
}

Fixed::~Fixed()
{
    std::cout << "dehsdfj" << std::endl;
}