/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 23:59:21 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:06:00 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Frag("ROBISSA");

	Frag.attack("NEXUS");
	Frag.takeDamage(40);
	Frag.beRepaired(20);
	Frag.highFivesGuys();
}

// Le but est de montrer qu'une classe de base (ClapTrap) peut avoir plusieurs classes dérivées différentes (ScavTrap et FragTrap). Chaque classe dérivée :

// Hérite des mêmes fonctionnalités de base de ClapTrap
// A ses propres valeurs (HP, énergie, dégâts)
// A sa propre fonction spéciale (guardGate ou highFivesGuys)
// A ses propres messages

// // C'est un exemple d'héritage qui permet de réutiliser le code tout en créant des variations spécialisées.