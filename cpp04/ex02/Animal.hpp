/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 06:21:41 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 09:19:48 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& obj);
    Animal&     operator=( const Animal& obj);
    virtual ~Animal();

    virtual void    makeSound() const = 0;
    std::string    getType() const;
};
