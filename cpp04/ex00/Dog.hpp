/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:27:56 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 07:58:55 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <string>

class Dog : public Animal
{
public:
    Dog();
    Dog( const Dog& obj );
    Dog&    operator=( const Dog& obj );
    ~Dog();

    void    makeSound() const;
    std::string getType() const;
};