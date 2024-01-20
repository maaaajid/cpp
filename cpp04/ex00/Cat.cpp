/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:45:24 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 08:04:31 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <string>

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat&    Cat::operator=( const Cat& obj )
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat distructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

std::string     Cat::getType() const
{
    return (type);
}