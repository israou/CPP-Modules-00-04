/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:28:49 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/21 18:58:30 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(Point const& other) : x(other.x), y(other.y) {}

Point&	Point::operator=(Point const& other)
{
	(void)other;
	return (*this);
}

Fixed	Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}

