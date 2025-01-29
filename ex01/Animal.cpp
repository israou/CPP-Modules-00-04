/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 23:15:41 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 17:03:44 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	// *this = other;
}
//initialisation list initialise directement l'attribut
//*this = other : cree d'abord l'attribut avec sa valeur par défaut, puis le réassigne
// Avec la liste d'initialisation, l'attribut est initialisé avant d'entrer dans le corps du constructeur
// Avec *this = other, l'attribut est d'abord initialisé par défaut, puis réassigné dans le corps du constructeur
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != & other)
		type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "* Generic animal sound *" << std::endl;
}

std::string Animal::gettype() const
{
	return (type);
}

// L'utilisation de *this = other n'est pas incorrecte, mais elle est moins optimale car elle implique :
// Construction par défaut des attributs
// Appel de l'opérateur d'affectation
// Potentiellement plus d'opérations mémoire
// Dans notre cas avec Animal, la différence de performance est minime car nous n'avons qu'un std::string, mais c'est une bonne pratique à adopter systématiquement.