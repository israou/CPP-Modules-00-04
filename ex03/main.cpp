/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:44:02 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:47:51 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("D1");

	std::cout << "\nTest des fonctions héritées :" << std::endl;
	diamond.attack("enemy");//ScavTrap
	diamond.takeDamage(30);//ClapTrap
	diamond.beRepaired(20);//ClapTrap
	diamond.guardGate();//ScavTrap
	diamond.highFivesGuys();//FragTrap

	std::cout << "\nTest de whoAmI :" << std::endl;
	diamond.whoAmI();		 // Affiche les deux noms

	return (0);
}
