/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 03:40:07 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 04:39:51 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap( std::string nm );
    FragTrap( const FragTrap& obj );
    FragTrap&   operator=( const FragTrap& obj );
    ~FragTrap();

    void    attack( const std::string& target );
    void    highFivesGuys( void );
};