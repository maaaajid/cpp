/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 23:31:56 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/22 05:05:22 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string Name, Weapon& we);
    ~HumanA();
    void    attack();

};