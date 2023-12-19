/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:20:29 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/17 17:42:40 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact() {};

std::string     Contact::getFirstName( void )
{
    return (FirstName);
}
std::string  Contact::getLastName( void )
{
    return (LastName);
}
std::string  Contact::getNickName( void )
{
    return (NickName);
}
std::string  Contact::getPhoneNumber( void )
{
    return (PhoneNumber);
}
std::string  Contact::getDarkSecret( void )
{
    return (DarkSecret);
}
void    Contact::setFirstName(std::string data)
{
    FirstName = data;
}
void    Contact::setLastName(std::string data)
{
    LastName = data;
}
void    Contact::setNickName(std::string data)
{
    NickName = data;
}
void    Contact::setPhoneNamber(std::string data)
{
    PhoneNumber = data;
}
void    Contact::setDarkSecret(std::string data)
{
    DarkSecret = data;
}