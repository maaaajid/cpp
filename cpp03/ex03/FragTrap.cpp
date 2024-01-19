/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:14:12 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 11:47:34 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constractor called" << std::endl;
    name = "default";
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap( std::string nm )
{
    std::cout << "FragTrap parametrized constractor called" << std::endl;
    name = nm;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& obj ): ClapTrap()
{
    std::cout << "FragTrap copy constractor called" << std::endl;
    *this = obj;
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

void    FragTrap::highFivesGuys( void )
{
    std::cout << "good job guys high five!!!!!!" << std::endl;
}