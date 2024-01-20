/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 08:17:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/20 08:23:25 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    WrongCat( const WrongCat& obj );
    WrongCat&    operator=( const WrongCat& obj );
    ~WrongCat();

    void    makeSound() const;
    std::string     getType() const;
};