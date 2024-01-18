/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:48:16 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/13 23:40:13 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &s = str;

    std::cout << &str << std::endl;
    std::cout << p << std::endl;
    std::cout << &s << std::endl;
    
    std::cout << str << std::endl;
    std::cout << *p << std::endl;
    std::cout << s << std::endl;
}