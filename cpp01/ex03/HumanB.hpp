/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:07:09 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 17:30:49 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string Name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &we);
};