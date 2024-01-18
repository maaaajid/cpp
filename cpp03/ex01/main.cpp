/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:55:20 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 03:22:32 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap majid("majid");
    ScavTrap hello = majid;
    majid = hello;
    
    hello.attack("majid");
    majid.beRepaired(15);
    majid.takeDamage(50);
    majid.beRepaired(150);
    hello.guardGate();
    majid.attack("haha");
    majid.ClapTrap::attack("howa");
}
