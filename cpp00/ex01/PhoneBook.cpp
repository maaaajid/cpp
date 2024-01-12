/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:43:07 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/12 04:41:17 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include <stdlib.h>
#include <cctype>
#include <cstdlib>
#include <iomanip>

bool    IfNumber(std::string promt, std::string input)
{
    int x = 0;

    if (promt == "phone number:")
    {
        while (input[x])
        {
            if (!isdigit(input[x]) && input[x] != '#' && input[x] != '+'
                && input[x] != ';' && input[x] != '*' && input[x] != ',')
                return (false);
            x++;
        }
    }
    return (true);
}

bool    IfNonPrintble(std::string input)
{
    int x = 0;

    while (input[x])
    {
        if (!isprint(input[x++]))
            return (false);
    }
    return (true);
}


void    contactPut(std::string contact)
{
    int size;

    size = contact.size();
    if (size <= 10)
    {
        std::cout << "\033[1;32m" << std::setw(10);
        std::cout << contact << "|\033[0m";
    }
    else
        std::cout << "\033[1;32m" << contact.substr(0, 9) << ".|\033[0m";
    
}


void    PhoneBook::CommandSearch(int i)
{
    std::string input;
    int x = 0;

    std::cout << "\033[1;32m==============================================\n\033[0m";
    std::cout << "\033[1;32m|                  Contacts                  |\n\033[0m";
    std::cout << "\033[1;32m==============================================\n\033[0m";
    std::cout << "\033[1;32m|      Index| FirstName|  LastName|  NickName|\n\033[0m";
    std::cout << "\033[1;32m==============================================\n\033[0m";
    while (x < i)
    {
        std::cout << "\033[1;32m|          " << x + 1 << "|\033[0m";
        contactPut(contact[x].getFirstName());
        contactPut(contact[x].getLastName());
        contactPut(contact[x].getNickName());
        std::cout << "\n";
        std::cout << "\033[1;32m==============================================\n\033[0m";
        x++;
    }
    std::cout << "\033[1;34m" << "which contact do you need?:" << "\033[0m";
    if (!getline(std::cin, input))
        exit(1);
    x = input[0] - '0';
    if (input.size() == 1 && isdigit(input[0]) && x > 0 && x < (i + 1))
    {
            std::cout << "\033[1;32m========================================================\n\033[0m";
            std::cout << "\033[1;32m|                        Contacts                      |\n\033[0m";
            std::cout << "\033[1;32m========================================================\n\033[0m";
            std::cout << "\033[1;32m| FirstName|  LastName|  NickName|PhoneNumb.|DarkSecret|\n\033[0m";
            std::cout << "\033[1;32m========================================================\n|\033[0m";
            contactPut(contact[x - 1].getFirstName());
            contactPut(contact[x - 1].getLastName());
            contactPut(contact[x - 1].getNickName());
            contactPut(contact[x - 1].getPhoneNumber());
            contactPut(contact[x - 1].getDarkSecret());
            std::cout << "\n";
            std::cout << "\033[1;32m========================================================\n\033[0m";
    }
    else
        std::cout << "\033[1;31minvalide input\n\033[0;0m";
    
    
    
}

std::string     GitData(std::string promt)
{
    std::cout << "\033[1;34m" << promt << "\033[0m";
    std::string input;
    
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(1);
    else if (!input.empty() && IfNonPrintble(input) && IfNumber(promt, input))
        return (input);
    else
    {
        std::cout << "\033[1;31minvalide input\n\033[0;0m";
        return (GitData(promt));
    }
}

void    PhoneBook::CommandAdd(int i)
{
    contact[i].setFirstName(GitData("first name:"));
    contact[i].setLastName(GitData("last name:"));
    contact[i].setNickName(GitData("nick name:"));
    contact[i].setPhoneNamber(GitData("phone number:"));
    contact[i].setDarkSecret(GitData("dark secret:"));
    std::cout << "\033[1;32m<<<<Contact has been added>>>>\033[0m" << std::endl;
}

std::string CheckForCommand()
{
    std::string input;

    std::cout << "\033[1;33mplease enter one of these tree commands :\nADD;\nSEARCH;\nEXIT;\nenter a command:\033[0m";
    std::getline(std::cin, input);
    if (std::cin.eof())
        exit(1);
    else if (input == "ADD")
        return ("ADD");   
    else if (input == "SEARCH")
        return ("SEARCH");
    else if (input == "EXIT")
        return ("EXIT");
    else
    {
        std::cout << "\033[1;31minvalide input\n\033[0;0m";
        return (CheckForCommand());
    }
}

int main(int ac, char **av)
{
    std::string command;
    PhoneBook   book;
    int         i = 0;
    int         contacts = 0;
    (void)av;

    if (ac == 1)
    {
        while (1)
        {
            command = CheckForCommand();
            if ("ADD" == command)
            {
                book.CommandAdd(i);
                i++;
                if (contacts <= 7)
                    contacts = i;
                if (i == 8)
                    i = 0; 
            }
            else if ("SEARCH" == command)
                book.CommandSearch(contacts);
            else if ("EXIT" == command)
                exit (0);
        }
    }
    else
        std::cout << "\033[1;31mNo argument required\033[0;0m" << std::endl;
    
}