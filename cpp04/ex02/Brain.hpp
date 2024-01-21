/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 02:37:03 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 06:56:15 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain( const Brain& obj);
    Brain&  operator=( const Brain& obj);
    ~Brain();

    std::string&    getIdeas( int index );
    void    setIdeas( std::string& ida, int index);    
};