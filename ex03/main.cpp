/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:38:49 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/31 01:24:35 by ichaabi          ###   ########.fr       */
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
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->use(3, *bob);

	me->unequip(0);
	me->unequip(1);
	me->use(0, *bob);

	Character* charles = new Character("charles");
	tmp = src->createMateria("ice");
	charles->equip(tmp);

	Character* charles_copy = new Character(*charles);
	charles_copy->use(0, *bob);

	delete bob;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;

	return (0);
}