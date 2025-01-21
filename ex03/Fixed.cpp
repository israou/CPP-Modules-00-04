/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:48:24 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/21 18:48:36 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != & other)
		this->_value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = n << _bits;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

//=======operateurs de comparaisons

bool	Fixed::operator>(const Fixed& other)const
{
	return (this->_value > other._value);
	//ola getRawBits()
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

//====== + - * / operateurs arithmetiques

Fixed	Fixed::operator+(const Fixed& other)const
{
	Fixed result;
	result._value = this->_value + other._value;
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other)const
{
	Fixed result;
	result.setRawBits(this->_value - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other)const
{
	Fixed result;
	result.setRawBits((this->_value * other.getRawBits()) >> _bits);
	return result;
}//la multiplication de deux nbres en , fixe-> il faut ajuster le point fixe

Fixed	Fixed::operator/(const Fixed& other)const
{
	Fixed result;

	if (other.getRawBits() == 0)
	{
		std::cout << "Error: division by zero" << std::endl;
		return (result);
	}
	result.setRawBits((this->_value << _bits) / other.getRawBits());
	return (result);
}

//====post pre ++ --

Fixed&	Fixed::operator++()//pre
{
	this->_value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)//post++
{
	Fixed tmp(*this);//sauvegarder l ancienne valeur
	this->_value += 1;
	return (tmp);//retourner l ancienne valeur
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

//=========min max

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
