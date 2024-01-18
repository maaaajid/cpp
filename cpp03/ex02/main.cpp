/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:55:20 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 04:57:17 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap majid("majid");
    FragTrap hello = majid;
    majid = hello;
    
    hello.attack("majid");
    majid.beRepaired(15);
    majid.takeDamage(50);
    majid.beRepaired(150);
    hello.highFivesGuys();
    majid.attack("haha");
    majid.ClapTrap::attack("howa");
}
