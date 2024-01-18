/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:56:51 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/14 00:44:16 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ] \nI love having extra bacon for my 7XL-double-cheese-"
        << "triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ] \nI cannot believe adding extra bacon costs more money. You didn’t put" 
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
} 

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for"
        << "years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error( void )
{
    std::cout <<  "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}
void    Harl::complain( std::string level)
{ 
    void (Harl::*ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int x = 0;  

    while (input[x] !=  level && x < 4)
        x++;
    switch (x)
    {
    case 0:
        (this->*ptr[0])();
    case 1:
        (this->*ptr[1])();
    case 2:
        (this->*ptr[2])();
    case 3:
        (this->*ptr[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }  

}