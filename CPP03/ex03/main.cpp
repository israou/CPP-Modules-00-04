/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:44:02 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:24:48 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap warrior("Warrior");
	DiamondTrap enemy("Enemy");

	std::cout << "\nBattle begins:" << std::endl;
	warrior.attack("Enemy");
	enemy.takeDamage(30);

	enemy.attack("Warrior");
	warrior.takeDamage(30);

	warrior.beRepaired(20);
	enemy.beRepaired(15);

	warrior.guardGate();
	enemy.highFivesGuys();

	std::cout << "\nIdentities:" << std::endl;
	warrior.whoAmI();
	enemy.whoAmI();

	return (0);
}
