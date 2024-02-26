/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:46:18 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/02/25 22:16:49 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat first("majid", 3);
    std::cout << first << std::endl;
    try
    {
        first.increment();
        std::cout << first << std::endl;
        first.increment();
        std::cout << first << std::endl;
        first.increment();
        std::cout << first << std::endl;
    }
    catch (std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
    std::cout << first << std::endl;
}