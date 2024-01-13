/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:56:51 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 18:08:11 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-"
        << "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" 
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
} 

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
        << "years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    Harl::complain( std::string level)
{
   void (Harl::*ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   int x = -1;

   while (++x < 4)
        if (level == input[x])
            (this->*ptr[x])();
   
}