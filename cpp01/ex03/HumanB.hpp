/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:07:09 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/22 03:59:37 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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