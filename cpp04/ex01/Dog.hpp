/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:27:56 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 09:10:39 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog( const Dog& obj );
    Dog&    operator=( const Dog& obj );
    ~Dog();

    void    makeSound() const;
    std::string getType() const;
    void    setbrain( std::string d, int idx);
    std::string&    getbrain( int idx );
};