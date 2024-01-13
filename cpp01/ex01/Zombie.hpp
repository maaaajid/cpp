/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 04:05:47 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 17:20:16 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include<iostream>

class Zombie
{
private:
    std::string name;

public:

    Zombie();
    ~Zombie();
    void announce( void );
    void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );