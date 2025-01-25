/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:14:32 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:34:06 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class	FragTrap : virtual public ClapTrap
{
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap&	operator=(const FragTrap& other);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};
# endif

//Le mot-clé virtual évite que DiamondTrap hérite de deux copies de ClapTrap
//  pour éviter la duplication des membres de ClapTrap