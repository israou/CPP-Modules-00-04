/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:39:40 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 01:46:58 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	Type = "Dog"; //initialiser le Type hérité de animal
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}
//la partie animal est correctement copiée
// On utilise la liste d'initialisation pour appeler le constructeur de copie de la classe mère

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this !=& other)
		Animal::operator=(other);//jappelle l'opérateur d'affectation de la classe mère
	return (*this);
}
//ne copie pas la partie animale, seule la partie dog est copiê

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

// C'est comme si vous aviez un document avec deux parties (Animal + Dog) et que vous ne copiez qu'une seule partie. Il faut copier le document en entier !
// Donc, règle générale :
//
// Toujours appeler le constructeur de la classe mère dans la liste d'initialisation du constructeur de copie
// Toujours appeler l'opérateur d'affectation de la classe mère dans l'opérateur d'affectation