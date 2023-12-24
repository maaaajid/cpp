/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:56:01 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/24 09:37:44 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("error");
    harl.complain("warning");
    harl.complain("debug");
    harl.complain("warning");
    harl.complain("info");
    harl.complain("error");
    harl.complain("debug");
    harl.complain("warning");
}