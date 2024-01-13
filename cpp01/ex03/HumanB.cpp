/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:32:18 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 17:43:08 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name)
{
    weapon = NULL;
}

HumanB::~HumanB(){};

void    HumanB::attack()
{
    if (!weapon)
        std::cout << name << " attacks" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &we)
{
    weapon = &we;
}

