/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:48:41 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/22 13:22:18 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static	Fixed area(Point const a, Point const b, Point const c)
{
	Fixed area = ((a.getX() * (b.getY() - c.getY())) +
				(b.getX() * (c.getY() - a.getY())) +
					(c.getX() * (a.getY() - b.getY()))) / 2;
	if (area < 0)
		area = area * -1;
	return (area);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed areaABC = area(a, b, c);

	Fixed areaPBC = area(point, b, c);
	Fixed areaPAC = area(a, point, c);
	Fixed areaPAB = area(a, b, point);
	if (areaPBC <= 0 || areaPAC <= 0 || areaPAB <= 0)
	{
		std::cout << "Point sur une arête ou à l'extérieur (aire négative ou nulle)" << std::endl;
		return false;
	}
	Fixed sumAreas = areaPBC + areaPAC + areaPAB;
	if (areaABC == sumAreas)
	{
		std::cout << "Point à l'intérieur du triangle" << std::endl;
		return true;
	}
	else
	{
		std::cout << "Point à l'extérieur du triangle" << std::endl;
		return false;
	}
}
