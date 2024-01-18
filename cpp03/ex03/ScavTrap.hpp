/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:13:41 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 06:28:10 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap( std::string nm );
    ScavTrap( const ScavTrap& obj );
    ScavTrap&   operator=( const ScavTrap& obj );
    ~ScavTrap();
    
    void    attack( const std::string& target);
    void    guardGate();
};