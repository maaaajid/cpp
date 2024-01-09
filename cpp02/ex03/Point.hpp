/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:07:55 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/09 06:48:44 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

class Point
{
private:
    Fixed const x;
    Fixed const y;


public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point& obj);
    Point&  operator=(const Point& obj);
    ~Point();

    Fixed   getx() const;
    Fixed   gety() const;
};


bool bsp( Point const a, Point const b, Point const c, Point const point);