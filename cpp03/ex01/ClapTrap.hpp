/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:54:16 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 01:24:55 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    HitPoint;
    unsigned int    EnergyPoint;
    unsigned int    AttackDamage;
public:
    ClapTrap();
    ClapTrap( std::string nm );
    ClapTrap( const ClapTrap& obj );
    ClapTrap&   operator=( const ClapTrap& obj );
    ~ClapTrap();
    
    void    attack(const std::string& target);
    void    takeDamage( unsigned int amount);
    void    beRepaired( unsigned int amount);
};