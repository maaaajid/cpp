/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:12:33 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/12 16:12:07 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./Zombie.hpp"
#include <stdlib.h>

int main()
{
    Zombie *first;
    first = newZombie("aelbouaa"); 
    first->announce();
    randomChump("majid");  
    randomChump("bouaami"); 
    delete first;
    return 0;
}