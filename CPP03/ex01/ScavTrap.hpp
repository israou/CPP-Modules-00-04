/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:19:38 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:21:50 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap&	operator=(const ScavTrap& other);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};
#endif