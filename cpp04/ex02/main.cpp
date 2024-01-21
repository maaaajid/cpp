/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 06:21:02 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/21 09:21:36 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    int x = 0;
    const Animal *animal[10];
    while (x < 10)
    {
        animal[x++] = new Dog();
        animal[x++] = new Cat();
    }

    ((Cat *)animal[1])->setbrain("majid", 0);
    std::cout << ((Cat *)animal[1])->getbrain(0) << std::endl ;
    
    x = 0;
    while (x < 10)
    {
        delete animal[x++] ;
    }

    return 0;
}