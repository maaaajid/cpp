/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:13:50 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/21 03:31:23 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zo = new Zombie;
    
    zo->setName( name );
    return (zo);
}