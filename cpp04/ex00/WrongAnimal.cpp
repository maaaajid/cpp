/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 08:14:13 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 08:16:46 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal&     WrongAnimal::operator=( const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal distructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimals Sound are Beautiful!" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (type);
}