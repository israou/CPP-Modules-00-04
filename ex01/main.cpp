/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 01:00:15 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 02:49:58 by ichaabi          ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	//================WRONG ANIMAL/CAT
	std::cout << "\nTesting Wrong Animals:" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << " " << std::endl;
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

// C'est un tableau de 4 pointeurs sur des Animal
// Chaque case du tableau va contenir l'adresse d'un Animal
// (qui peut être un Dog ou un Cat grâce au polymorphisme)
// Chaque Dog et Cat a maintenant un attribut brain qui est un pointeur vers un objet Brain
// Quand on crée un Dog/Cat, on crée aussi un Brain avec new Brain()
// Quand on détruit un Dog/Cat, on doit aussi détruire son Brain avec delete brain
// Quand on copie un Dog/Cat, on doit faire une copie profonde du Brain


// C'est une simulation d'un concept réel :
//chaque animal a son propre cerveau
//et quand on copie un animal, il faut lui donner son propre cerveau
//(pas partager le même cerveau entre deux animaux)

// 1- Copie Superficielle/ shallowcopy

// class Dog
// {
// 	private:
// 		Brain* brain;
// };

// // Si on faisait une copie superficielle :
// Dog::Dog(const Dog& other) {
// 	this->brain = other.brain;  // DANGER ! Les deux chiens partagent le même cerveau
// }

// Dog dog1;              // dog1->brain pointe vers un cerveau
// Dog dog2 = dog1;      // dog2->brain pointe vers LE MÊME cerveau
// delete dog1.brain;    // Le cerveau est détruit
// dog2 a maintenant un pointeur invalide !


// Copie Profonde :

// Dog::Dog(const Dog& other)
// {
// 	this->brain = new Brain(*other.brain);  // On crée un NOUVEAU cerveau
// }

// Dog dog1;              // dog1->brain pointe vers cerveau1
// Dog dog2 = dog1;      // dog2->brain pointe vers une COPIE du cerveau1
// delete dog1.brain;    // cerveau1 est détruit, mais dog2 a toujours son propre cerveau