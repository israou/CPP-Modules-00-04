/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:08:58 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:21:11 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap warrior("Athena");
	ScavTrap enemy("Robiofox");

	warrior.attack("Robiofox");
	enemy.takeDamage(20);

	enemy.attack("Athena");
	warrior.takeDamage(20);

	warrior.beRepaired(30);
	enemy.beRepaired(25);

	warrior.guardGate();
	enemy.guardGate();

	return (0);
}
