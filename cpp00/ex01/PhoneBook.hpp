/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:21:41 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/12 04:03:18 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

class PhoneBook
{
private:
    Contact contact[8];

public:
    void    CommandAdd(int i);
    void    CommandSearch(int i);
};