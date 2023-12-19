/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:46:06 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/17 17:41:51 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
private :
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkSecret;
public :
    Contact();

    std::string  getLastName( void );
    std::string  getNickName( void );
    std::string  getPhoneNumber( void );
    std::string  getDarkSecret( void );
    std::string  getFirstName( void );
    void    setFirstName(std::string data);
    void    setLastName(std::string data);
    void    setNickName(std::string data);
    void    setPhoneNamber(std::string data);
    void    setDarkSecret(std::string data); 
};