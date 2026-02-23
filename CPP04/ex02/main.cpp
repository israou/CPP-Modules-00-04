/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 01:00:15 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/30 22:15:24 by ichaabi          ###   ########.fr       */
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
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	//================WRONG ANIMAL/CAT
	std::cout << "\nTesting Wrong Animals:" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->gettype() << " " << std::endl;
	wrong_cat->makeSound();
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

	for(int i = 0; i < 4; i++)
		delete animals[i];

	//test de la copie profonde
	Dog dog1;
	Dog dog2 = dog1;
	Dog dog3;
	dog3 = dog1;

	return (0);
}
