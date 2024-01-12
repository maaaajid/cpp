/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:40:50 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/12 18:14:08 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int x = 0;
    int y = 1;

    if (ac >= 2)
    {
        while (av[y])
        {
            while (av[y][x])
            {
                av[y][x] = std::toupper(av[y][x]);
                x++;
            }
            std::cout << av[y];
            x = 0;
            y++;
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    return (0);
}
