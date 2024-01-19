/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:15:25 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 11:55:03 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
    name = "default";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::EnergyPoint;
    std::cout << "DiamondTrap constractor called" << std::endl;
}
DiamondTrap::DiamondTrap( const std::string& nm)
{
    std::cout << "DiamondTrap parametrized constractor called" << std::endl;
    name = nm;
    ClapTrap::name = nm + "_clap_name";
    HitPoint = FragTrap::HitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj): ClapTrap(), FragTrap(), ScavTrap()
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

void    DiamondTrap::attack( const std::string& nm)
{
    ScavTrap::attack(nm);
}


void    DiamondTrap::whoAmI(void)
{
    std::cout << "hello this is DiamondTrap " << name << " and my inner ClapTrap " 
            << ClapTrap::name << std::endl;
}