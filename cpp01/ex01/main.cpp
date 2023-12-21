/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:26:18 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/21 06:31:42 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main( void )
{
    int N = 10;
    Zombie *zombies;

    zombies = zombieHorde(N, "majid");
    delete[] zombies;
}