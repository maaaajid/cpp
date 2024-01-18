/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:15:25 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 08:41:23 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap constractor called" << std::endl;
}
DiamondTrap::DiamondTrap( const std::string& nm): ClapTrap(nm + "_clap_name")
{
    std::cout << "DiamondTrap parametrized constractor called" << std::endl;
    name = nm;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy constractor called" << std::endl;
    *this = obj;
}

DiamondTrap&    DiamondTrap::operator=( const DiamondTrap& obj)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    ClapTrap::name = obj.ClapTrap::name;
    this->name = obj.name;
    this->HitPoint = obj.HitPoint;
    this->EnergyPoint = obj.EnergyPoint;
    this->AttackDamage = obj.AttackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destractor called" << std::endl;
}


void    DiamondTrap::annonce(void)
{
    std::cout << name << HitPoint << EnergyPoint << AttackDamage << std::endl;
    ClapTrap::attack("haha");
}