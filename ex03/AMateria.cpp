/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:11:39 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:52:43 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMateria CONSTRUCTOR CALLED" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
	std::cout << "AMateria COPY CONSTRUCTOR CALLED" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria DESTRUCTOR CALLED" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != & other)
		type = other.type;
	return (*this);
}

std::string	const	& AMateria::getType()const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
