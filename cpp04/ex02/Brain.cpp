/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 02:37:16 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 07:50:13 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    int x = 0 ;
    while (x < 100) {
        ideas[x++] = "idea" ;
    }
}

Brain::Brain( const Brain& obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain&  Brain::operator=( const Brain& obj )
{
    int x = -1;
    while (++x < 100)
        this->ideas[x] = obj.ideas[x]; 
    std::cout << "Brain copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain distructor called" << std::endl;
}

std::string&    Brain::getIdeas( int index )
{
    if (index >= 0 && index <= 99)
        return (ideas[index]);
    else
        return ideas[0];
}

void    Brain::setIdeas( std::string& ida, int index)
{
    if (index >= 0 && index <= 99)
        this->ideas[index] = ida;
}
