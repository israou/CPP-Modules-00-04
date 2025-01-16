/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:30:00 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/15 23:13:08 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "Constructeur HumanB called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructeur HumanB called" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)//ref pour s assurer que l arme existe(reeellle)pas sa copie
{
	this->weapon = &weapon;//j equipe mon robio d une arme(je stocke l adresse de l arme)
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with" << std::endl;
}
