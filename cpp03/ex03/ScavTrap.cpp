/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:13:29 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 11:48:26 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "default";
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap constractor called" << std::endl;
}

ScavTrap::ScavTrap( std::string nm )
{
    name = nm;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap parametrized constractor called" << std::endl;
}
ScavTrap::ScavTrap( const ScavTrap& obj ): ClapTrap()
{
    std::cout << "ScavTrap copy constractor called" << std::endl;
    *this = obj;
}

ScavTrap&   ScavTrap::operator=( const ScavTrap& obj )
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    name = obj.name;
    HitPoint = obj.HitPoint;
    EnergyPoint = obj.EnergyPoint;
    AttackDamage = obj.AttackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack( const std::string& target)
{
    if (EnergyPoint && HitPoint)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " <<
                AttackDamage << " points of damage" << std::endl;
        EnergyPoint--;
    }
    else if (!EnergyPoint)
    {
        std::cout << "ScavTrap " << name << " has no energy points to attack" << std::endl;
    }
    else if (!HitPoint)
    {
        std::cout << "ScavTrap " << name << " can't attack "
            << target << " , he's already dead" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " in GATE KEEPER mode" << std::endl;
}