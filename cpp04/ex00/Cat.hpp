/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 07:45:34 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 07:58:16 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
public:
    Cat();
    Cat( const Cat& obj );
    Cat&    operator=( const Cat& obj );
    ~Cat();

    void    makeSound() const;
    std::string     getType() const;
};