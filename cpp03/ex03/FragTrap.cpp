/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:14:12 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 05:14:15 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap constractor called" << std::endl;
}

FragTrap::FragTrap( std::string nm ): ClapTrap(nm)
{
    std::cout << "FragTrap parametrized constractor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& obj ): ClapTrap(obj)
{
    std::cout << "FragTrap copy constractor called" << std::endl;
}

FragTrap&   FragTrap::operator=( const FragTrap& obj )
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    name = obj.name;
    HitPoint = obj.HitPoint;
    EnergyPoint = obj.EnergyPoint;
    AttackDamage = obj.AttackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destractor called" << std::endl;
}

void    FragTrap::attack( const std::string& target )
{
    if (EnergyPoint && HitPoint)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " <<
                AttackDamage << " points of damage" << std::endl;
        EnergyPoint--;
    }
    else if (!EnergyPoint)
    {
        std::cout << "FragTrap " << name << " has no energy points to attack" << std::endl;
    }
    else if (!HitPoint)
    {
        std::cout << "FragTrap " << name << " can't attack "
            << target << " because he's already dead" << std::endl;
    }
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "good job guys high five!!!!!!" << std::endl;
}