/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:14:02 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 06:28:20 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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