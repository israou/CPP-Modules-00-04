/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:39:40 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 17:03:44 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog"; //initialiser le type hérité de animal
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain(*other.brain);  // Deep copy - on crée une nouvelle copie du cerveau
}
//la partie animal est correctement copiée
// On utilise la liste d'initialisation pour appeler le constructeur de copie de la classe mère

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this !=& other)
	{
		Animal::operator=(other);//jappelle l'opérateur d'affectation de la classe mère
		delete brain;//supprime l'ancien cerveau
		brain = new Brain(*other.brain);//crée une copie profonde du nouveau cerveau
	}
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








// Dans le constructeur :

// On alloue un nouveau Brain avec new Brain()


// Dans le destructeur :

// On libère la mémoire du Brain avec delete brain


// Dans le constructeur de copie :

// On crée une nouvelle copie du Brain avec new Brain(*other.brain)
// C'est une copie profonde (deep copy)


// Dans l'opérateur d'affectation :

// On supprime d'abord l'ancien Brain
// Puis on crée une nouvelle copie du Brain de l'autre chien
// C'est aussi une copie profonde



// Cette implémentation assure qu'il n'y a pas de fuites mémoire et que chaque Dog a son propre Brain unique.