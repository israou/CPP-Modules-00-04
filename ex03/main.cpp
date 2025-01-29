/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:38:49 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:55:44 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
# include <string>

int main()
{
	// Test de la création de materias
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// Création d'un personnage
	ICharacter* me = new Character("me");

	// Test de createMateria et equip
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// Création d'un autre personnage pour tester les effets
	ICharacter* bob = new Character("bob");

	// Test des effets des materias
	me->use(0, *bob);  // Devrait afficher "shoots an ice bolt at bob"
	me->use(1, *bob);  // Devrait afficher "heals bob's wounds"

	// Test avec un index invalide
	me->use(3, *bob);  // Ne devrait rien faire car slot vide

	// Test de unequip
	me->unequip(0);	// La materia devrait être retirée mais pas détruite
	me->use(0, *bob);  // Ne devrait rien faire car slot maintenant vide

	// Test de copie de personnage
	Character* charles = new Character("charles");
	tmp = src->createMateria("ice");
	charles->equip(tmp);

	Character* charles_copy = new Character(*charles);  // Test du constructeur de copie
	charles_copy->use(0, *bob);  // Devrait marcher car copie profonde

	// Nettoyage
	delete bob;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;

	return 0;
}