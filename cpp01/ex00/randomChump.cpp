/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:13:42 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/21 03:38:59 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void    randomChump( std::string name )
{
    Zombie zombie;

    zombie.setName( name );
    zombie.announce();
}