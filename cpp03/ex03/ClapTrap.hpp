/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:14:20 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 05:14:22 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned long long    HitPoint;
    unsigned long long    EnergyPoint;
    unsigned long long    AttackDamage;
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