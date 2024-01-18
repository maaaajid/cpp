/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:09:59 by aelbouaa          #+#    #+#             */
/*   Updated: 2024/01/15 02:44:50 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Fixed   doTheMath(Point const a, Point const b, Point const c)
{
    Fixed x1 = a.getx();
    Fixed y1 = a.gety();
    Fixed x2 = b.getx();
    Fixed y2 = b.gety();
    Fixed x3 = c.getx();
    Fixed y3 = c.gety();
    Fixed res = ((x1 * y2) - (x2 * y1)) + ((x2*y3) - (x3*y2)) + ((x3*y1) - (x1*y3));
    if (res < 0) 
        res = res * -1;
    return (res / 2);

}


bool    bsp( Point const a, Point const b, Point const c, Point const point)
{   
    Fixed ABC = doTheMath(a, b, c);
    Fixed PBC = doTheMath(point, b, c);
    Fixed PCA = doTheMath(a, point, c);
    Fixed PAB = doTheMath(a, b, point);
    Fixed total = PBC + PCA + PAB;
    if (PBC == 0 || PCA == 0 || PAB == 0)
        return (false);
    if (total == ABC)
        return (true);
    return (false);
}