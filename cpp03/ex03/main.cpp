/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:13:56 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/18 08:43:52 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap majid("majid");
    std::cout << "\n\n\n\n\n" << std::endl;
    DiamondTrap omar = majid;
        std::cout << "\n\n\n\n\n" << std::endl;

    omar.annonce();
        std::cout << "\n\n\n\n\n" << std::endl;

    majid = omar;
        std::cout << "\n\n\n\n\n" << std::endl;
    
    majid.annonce();
}
