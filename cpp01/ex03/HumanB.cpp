/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:32:18 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/22 04:00:04 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name){};

HumanB::~HumanB(){};

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &we)
{
    weapon = &we;
}

