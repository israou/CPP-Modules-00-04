/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:51:07 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:52:51 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice CONSTRUCTOR CALLED" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice COPY CONTRUCTOR CALLED" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice DESTRUCTOR CALLED" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
