/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:15:11 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 09:37:45 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap( const std::string& nm);
    DiamondTrap( const DiamondTrap& obj );
    DiamondTrap&    operator=( const DiamondTrap& obj );
    ~DiamondTrap();
    
    void    attack( const std::string& nm );
    void    whoAmI( void );
    
};