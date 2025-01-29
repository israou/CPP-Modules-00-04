/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:08:33 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/30 00:13:19 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure CONSTRUCTOR CALLED" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure COPY CONSTRUCTOR CALLED" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure DESTRUCTOR CALLED" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));  // On crée une nouvelle Cure en utilisant le constructeur de copie
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}