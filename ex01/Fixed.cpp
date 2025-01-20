/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:06:03 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/20 11:22:46 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	// this->_value = other._value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != & other)//verifier qu on ne copie pas l objet sur lui meme
		this->_value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << _bits;//decaler de 8 bits vers la gauche
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << _bits));//* 256 et arrondit
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_value / (1 << _bits));//diviser par 256
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	return (this->_value >> _bits);//8 bits vers la droite
}
// int x = 5;
// std::cout << x << std::endl; --> ca marche car c++ sait comment afficher un int

// Fixed a(5);
// std::cout << a << std::endl; --> erreur ! c++ ne sait as comment afficher un fixed

// !!solution!! --> surcharge de <<
// std::ostream& out : c est l objet qui gere la sortie
// const Fixed& fixed : le nbre a virgule fixe
// return out : chaines les <<

// Fixed a(5.5f);
// std::cout << a;
// std::cout << a << " est un nombre" << std::endl;
// comme si on disait à C++ : "Quand tu vois <<, voici comment afficher un Fixed"
