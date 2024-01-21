/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 08:19:36 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 08:20:21 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = obj;
}

WrongCat&    WrongCat::operator=( const WrongCat& obj )
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    type = obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat distructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

std::string     WrongCat::getType() const
{
    return (type);
}