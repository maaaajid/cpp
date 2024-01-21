/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:27:45 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 09:10:34 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    type = "dog";
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( const Dog& obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    type = obj.type;
    brain = new Brain(*obj.brain);
}

Dog&    Dog::operator=( const Dog& obj )
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    type = obj.type;
    delete brain;
    brain = new Brain(*obj.brain);
    return (*this);
}

Dog::~Dog()
{
    delete brain;
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

std::string&    Dog::getbrain( int idx )
{
    if (idx >= 0 && idx <= 99)
        return (brain->getIdeas(idx));
    else
        return (brain->getIdeas(0));
}

void    Dog::setbrain(std::string d, int idx)
{
    if (idx >= 0 && idx <= 99)
        brain->setIdeas(d, idx);
}