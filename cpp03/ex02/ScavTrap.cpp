/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:04:57 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 04:40:20 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap constractor called" << std::endl;
}

ScavTrap::ScavTrap( std::string nm ): ClapTrap(nm)
{
    std::cout << "ScavTrap parametrized constractor called" << std::endl;
}
ScavTrap::ScavTrap( const ScavTrap& obj ): ClapTrap(obj)
{
    std::cout << "ScavTrap copy constractor called" << std::endl;
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
    std::cout << "ScavTrap " << name << " attacks " << target << " , causing him "
            << AttackDamage << " of his hit points" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " in GATE KEEPER mode" << std::endl;
}