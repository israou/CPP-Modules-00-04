/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:13:57 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:14:02 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap " << _name << " is copied!" << std::endl;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "copy assignment is called" << std::endl;
	if (this != & other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}


void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack: no energy or hit points left!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
	std::cout << "_hitPoints --------------->: " << _hitPoints << std::endl;
		_hitPoints -= amount;
	std::cout << "_hitPoints --------------->: " << _hitPoints << std::endl;
	std::cout << "amount --------------->: " << amount << std::endl;
	std::cout<< "ClapTrap " << _name << " takes " << amount << " damage! HP left: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "_energyPoints======>> " << _energyPoints << std::endl;
	std::cout << "_hitPoints======>> " << _hitPoints << std::endl;
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair: no energy or hit points left!" << std::endl;
		return ;
	}
	std::cout << "_hitPoints====****==>> " << _hitPoints << std::endl;
	std::cout << "amount==****====>> " << amount << std::endl;
	std::cout << "_energyPoints======>> " << _energyPoints << std::endl;

	_hitPoints += amount;
	_energyPoints--;
	std::cout << "_hitPoints====****==>> " << _hitPoints << std::endl;
	std::cout << "amount==****====>> " << amount << std::endl;
	std::cout << "_energyPoints======>> " << _energyPoints << std::endl;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount
			<< " HP! Current HP: " << _hitPoints << std::endl;
}
