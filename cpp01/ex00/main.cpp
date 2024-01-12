/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:12:33 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/11 08:09:18 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./Zombie.hpp"
#include <stdlib.h>

int main()
{
    Zombie *first;
    randomChump("majid");  
    randomChump("bouaami"); 
    first = newZombie("aelbouaa"); 
    first->announce();
    delete first;
    return 0;
}