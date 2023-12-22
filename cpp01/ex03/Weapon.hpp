/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:31:09 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/22 03:52:25 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon( std::string Type);
    ~Weapon();
    void    setType( std::string type);
    const std::string&  getType( void ) const;
};
