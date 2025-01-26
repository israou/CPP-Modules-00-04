/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 23:59:21 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:12:24 by ichaabi          ###   ########.fr       */
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

// Le but est de montrer qu'une classe de base (ClapTrap) peut avoir plusieurs classes dérivées différentes (ScavTrap et FragTrap). Chaque classe dérivée :

// Hérite des mêmes fonctionnalités de base de ClapTrap
// A ses propres valeurs (HP, énergie, dégâts)
// A sa propre fonction spéciale (guardGate ou highFivesGuys)
// A ses propres messages

// // C'est un exemple d'héritage qui permet de réutiliser le code tout en créant des variations spécialisées.