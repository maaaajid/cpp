/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:46:49 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 01:01:14 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string nm) : name(nm), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& obj)
{
    std::cout << "copy constractor called" << std::endl;
    *this = obj;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& obj)
{
    std::cout << "copy assignment operator called" << std::endl;
    name = obj.name;
    HitPoint = obj.HitPoint;
    EnergyPoint = obj.EnergyPoint;
    AttackDamage = obj.AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

void    ClapTrap::attack( const std::string& target)
{
    if (EnergyPoint && HitPoint)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " <<
                AttackDamage << " points of damage" << std::endl;
        EnergyPoint--;
    }
    else if (!EnergyPoint)
    {
        std::cout << "ClapTrap " << name << " has no energy points to attack" << std::endl;
    }
    else if (!HitPoint)
    {
        std::cout << "ClapTrap " << name << " can't attack "
            << target << " because he's already dead" << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount)
{
    if (!HitPoint)
        std::cout << "ClapTrap is alreay dead" << std::endl ;
    else if (HitPoint > amount)
    {
        HitPoint -= amount;
        std::cout << "ClapTrap " << name << " take a damage, causing him to lose " <<
                amount << " of hit point, and stay whit " << HitPoint << " of his hit points" << std::endl;
    }
    else if (HitPoint <= amount)
    {
        HitPoint = 0;
        std::cout << "ClapTrap " << name << " took " << amount 
            << " point of damage, So ClapTrap " << name << " is dead" << std::endl;
        
    }
}

void    ClapTrap::beRepaired( unsigned int amount)
{
    if (EnergyPoint && HitPoint)
    {
        EnergyPoint--;
        HitPoint += amount;
        std::cout << "ClapTrap " << name << " repaired it self, so he left whit " <<
                    EnergyPoint << " of energy points and " << HitPoint << "of hit points" << std::endl;
    }
    else if (!EnergyPoint)
    {
        std::cout << "ClapTrap " << name << " want to repaire it self" << 
            ", but no energy points left" << std::endl;
    }
    else if (!HitPoint)
    {
        std::cout << "ClapTrap " << name << " repaire it self in HELL" << std::endl;
    }
}