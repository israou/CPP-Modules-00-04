/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:47:45 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/30 22:16:55 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name), unequippedCount(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for ( int j = 0; j < 100; j++)
		unequipped[j] = NULL;
}

Character::Character(const Character& other) : name(other.name), unequippedCount(other.unequippedCount)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}

	for (int j = 0; j < unequippedCount; j++)
	{
		if (other.unequipped[j])
			unequipped[j] = other.unequipped[j]->clone();
		else
			unequipped[j] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < unequippedCount; i++)
	{
		if (unequipped[i])
			delete unequipped[i];
	}
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; i++)
			delete inventory[i];
		for (int i = 0; i < unequippedCount; i++)
			delete unequipped[i];

		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}

		unequippedCount = other.unequippedCount;
		for (int i = 0; i < unequippedCount; i++)
		{
			if (other.unequipped[i])
				unequipped[i] = other.unequipped[i]->clone();
			else
				unequipped[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] && unequippedCount < 100)
	{
		unequipped[unequippedCount] = inventory[idx];
		unequippedCount++;
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}
