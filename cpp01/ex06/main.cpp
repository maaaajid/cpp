/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:50:37 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 18:20:59 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac,char **av)
{
    if (ac == 2)
    {
        Harl harl;
        harl.complain(av[1]);
    }
    else
        std::cout << "invalide input" << std::endl;
}