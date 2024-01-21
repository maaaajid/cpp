/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:45:24 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 09:10:05 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& obj )
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*obj.brain);
    type = obj.type;
}

Cat&    Cat::operator=( const Cat& obj )
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    type = obj.type;
    delete brain;
    brain = new Brain(*obj.brain);
    return (*this);
}

Cat::~Cat()
{
    delete brain;
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

std::string&    Cat::getbrain( int idx )
{
    if (idx >= 0 && idx <= 99)
        return (brain->getIdeas(idx));
    else
        return (brain->getIdeas(0));
}

void    Cat::setbrain(std::string d, int idx)
{
    if (idx >= 0 && idx <= 99)
        brain->setIdeas(d, idx);
}