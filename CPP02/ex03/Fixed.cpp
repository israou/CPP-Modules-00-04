/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:48:24 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/22 13:24:05 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != & other)
		this->_value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n)
{
	this->_value = n << _bits;
}

Fixed::Fixed(const float n)
{
	this->_value = roundf(n * (1 << _bits));
}

int	Fixed::toInt(void)const
{
	return (this->_value >> _bits);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_value / (1 << _bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void)const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

bool	Fixed::operator>(const Fixed& other)const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(const Fixed& other)const
{
	return (this->_value < other._value);
}

bool	Fixed::operator>=(const Fixed& other)const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator<=(const Fixed& other)const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator==(const Fixed& other)const
{
	return (this->_value == other._value);
}

bool	Fixed::operator!=(const Fixed& other)const
{
	return (this->_value != other._value);
}

Fixed	Fixed::operator+(const Fixed& other)const
{
	Fixed result;
	result._value = this->_value + other._value;
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other)const
{
	Fixed result;
	result._value = (this->_value - other._value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other)const
{
	Fixed result;
	result._value = (this->_value * other._value >> _bits);
	return result;
}

Fixed	Fixed::operator/(const Fixed& other)const
{
	Fixed result;

	if (other._value == 0)
	{
		std::cout << "Error: division by zero" << std::endl;
		return (result);
	}
	result._value = ((this->_value << _bits) / other._value);
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_value += 1;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_value -= 1;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
