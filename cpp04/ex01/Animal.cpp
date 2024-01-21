/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 06:21:23 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 07:58:29 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal&     Animal::operator=( const Animal& obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal distructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Animals Sound are Beautiful!" << std::endl;
}

std::string    Animal::getType() const
{
    return (type);
}