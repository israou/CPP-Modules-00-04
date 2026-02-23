/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 01:00:15 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/30 22:10:57 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->gettype() << " " << std::endl;
	std::cout << i->gettype() << " " << std::endl;
	std::cout << meta->gettype() << " " << std::endl;
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

	std::cout << wrong_cat->gettype() << " " << std::endl;
	wrong_cat->makeSound();
	wrong_meta->makeSound();

	delete wrong_cat;
	delete wrong_meta;
	return (0);
}
