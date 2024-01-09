/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:08:08 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/09 06:22:31 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{}

Point::Point(const Fixed a, const Fixed b): x(a), y(b)
{}

Point::Point(const Point& obj): x(obj.x), y(obj.y)
{}

Point::~Point(){}

Fixed   Point::getx() const
{
    return (x);
}

Fixed   Point::gety() const
{
    return (y);
}