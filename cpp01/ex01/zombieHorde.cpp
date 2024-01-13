/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:18:35 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/12 16:22:42 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int x = -1;
    Zombie *zombie;

    if (N < 0)
        return (NULL);    
    zombie = new Zombie[N];
    while (++x < N)
    {
        zombie[x].setName(name);
        zombie[x].announce();
    }
    return (zombie);
}