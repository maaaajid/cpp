/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:30:48 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/12 16:44:51 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type){};

Weapon::~Weapon(){};


void    Weapon::setType( std::string Type)
{
    type = Type;
}

const std::string&  Weapon::getType() const
{
    return (type);
}