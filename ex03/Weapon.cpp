/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:23:00 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/15 22:42:53 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Constructeur Weapon appelé" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructeur Weapon called" << std::endl;
}

const std::string& Weapon::getType() const
{
	return (this->type);
}
//je te donne ladresse de ma variable type mais tu ne peux pas la modifier
//donner aacces au string existant et non creer sa copie
void	Weapon::setType(std::string type)
{
	this->type = type;
}
