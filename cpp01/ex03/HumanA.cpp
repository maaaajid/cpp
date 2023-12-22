/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:31:37 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/22 03:57:39 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon& we) : name(Name), weapon(we){};

HumanA::~HumanA(){};

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}