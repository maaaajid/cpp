/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:27:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 07:59:29 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
    type = "dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( const Dog& obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog&    Dog::operator=( const Dog& obj )
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog distructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}

std::string     Dog::getType() const
{
    return (type);
}