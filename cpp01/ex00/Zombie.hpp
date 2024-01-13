/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:13:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 17:19:57 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

class Zombie
{
private:
    std::string name;

public:

    Zombie();
    ~Zombie();
    void    announce( void );
    void    setName( std::string name );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );  