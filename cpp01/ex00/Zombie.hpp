/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:13:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/21 04:01:07 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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