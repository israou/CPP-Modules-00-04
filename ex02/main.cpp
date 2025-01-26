/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 23:59:21 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:23:20 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap warrior("ROBISSA_2.0");
	FragTrap enemy("NEXUS");

	warrior.attack("NEXUS");
	enemy.takeDamage(30);

	enemy.attack("ROBISSA");
	warrior.takeDamage(30);

	warrior.beRepaired(20);
	enemy.beRepaired(15);

	warrior.highFivesGuys();
	enemy.highFivesGuys();

	return (0);
}
