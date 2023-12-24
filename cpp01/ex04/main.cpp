/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:18:01 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/12/24 06:33:29 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>

std::string    replace(std::string line, char *rm,char *rp)
{
    int x = -1;
    int p = -1;
    unsigned long index = 0;

    while (rm[++x]);
    while (rp[++p]);
    while (1)
    {
        index = line.find(rm, index + p);
        if (index <= line.length())
        {
            line.erase(index, x);
            line.insert(index, rp);
        }
        else
            break ;
    }
    return (line);
}


int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string name = av[1];
        name = name + ".replace";
        std::string TheLine;
        std::fstream TheFile;
        TheFile.open(av[1], std::ios::in);
        if (!TheFile)
        {
            std::cout << "\033[1;31mthere is no file whit the name of " << av[1] << "\033[0;0m" << std::endl;
            exit (1);
        }
        std::ofstream OutFile(name.c_str());
        while (std::getline(TheFile, TheLine))
        {
            if (av[2][0])
                TheLine = replace(TheLine, av[2], av[3]);
            OutFile << TheLine << std::endl;
        }
        TheFile.close();
        OutFile.close();
    }
    else
        std::cout << "\033[1;31minvalide input\n\033[0;0m";
}