/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:14:24 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:14:25 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " is copied!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "copy assignement is called" << std::endl;
	if (this !=& other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "FragTrap " << _name << " can't attack: no energy or hit points left!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
