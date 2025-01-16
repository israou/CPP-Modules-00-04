/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 20:38:09 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/16 03:43:13 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif