/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 01:00:15 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 17:42:35 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
# include "Brain.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->gettype() << " " << std::endl;
	std::cout << i->gettype() << " " << std::endl;
	// std::cout << meta->gettype() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;
	//================WRONG ANIMAL/CAT
	std::cout << "\nTesting Wrong Animals:" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->gettype() << " " << std::endl;
	wrong_cat->makeSound();//appellera le makeSound de WrongAnimal et non de WrongCat
	wrong_meta->makeSound();

	delete wrong_cat;
	delete wrong_meta;

	//=================Brain
	std::cout << "\nBRAIN TEST\n" << std::endl;
	const Animal* animals[4] = {
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat()
	};

	// Libération de la mémoire
	for(int i = 0; i < 4; i++)
		delete animals[i];

	//test de la copie profonde
	Dog dog1;
	Dog dog2 = dog1;// Utilise le constructeur de copie
	Dog dog3;
	dog3 = dog1;// Utilise l'opérateur d'affectation

	return (0);
}

// Quand vous exécutez ce code
//vous ne devriez plus pouvoir créer d'Animal directement
//mais vous pouvez toujours créer des Dog et des Cat qui héritent d'Animal.
//C'est exactement ce que voulait l'exercice :
//rendre impossible la création d'un Animal générique tout en gardant la possibilité de créer des animaux spécifiques.