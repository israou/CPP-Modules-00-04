/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 02:36:04 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/21 14:04:37 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private :
		int _value;//la convention _ tres repandue en cpp aide a distinguer les variables locaux de ceux de la classe
		static const int _bits = 8;

	public :
		Fixed();//constructeur par defaut
		Fixed(const Fixed& other);//copie
		Fixed& operator=(const Fixed& other);//operateur d affectation
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif