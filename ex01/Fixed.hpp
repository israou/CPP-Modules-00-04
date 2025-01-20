/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:57:32 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/20 11:18:39 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private :
		int _value;
		static const int _bits = 8;
	public :
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();

		Fixed(const int n);//entier
		Fixed(const float n);//flottant

		Fixed& operator=(const Fixed& other);

		float toFloat( void ) const;
		int toInt( void ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
//une surcharge de l’opérateur d’insertion («)
//qui insère une représentation en virgule flottante du nombre à virgule fixe
//dans le flux de sortie (objet output stream) passé en paramètre.
#endif