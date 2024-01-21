/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 08:14:33 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 08:27:46 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& obj);
    WrongAnimal&     operator=( const WrongAnimal& obj);
    ~WrongAnimal();
    
    void    makeSound() const;
    std::string    getType() const;
};