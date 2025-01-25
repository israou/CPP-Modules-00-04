/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:31:48 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:49:46 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"), ScavTrap(name),
	FragTrap(name), name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << name << " is created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	ClapTrap(other), ScavTrap(other), FragTrap(other) //copie a partie other de chaque classe
{
	*this = other;//copie les membres specifique
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this !=& other)
	{
		ClapTrap::operator=(other);//copie les membres de claptrap
		name = other.name;//copie le nom specifique a DiamondTrap
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
