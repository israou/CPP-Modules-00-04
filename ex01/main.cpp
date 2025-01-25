/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:08:58 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 00:04:23 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	{
		ScavTrap scav("Athena");

		scav.attack("Robofox");
		scav.takeDamage(50);
		scav.beRepaired(30);
		scav.guardGate();
	}

	return (0);
}

// protected dans parent → reste accessible dans enfant
// public dans parent → reste public dans enfant
// private dans parent → inaccessible dans enfant

// ScavTrap hérite :
// Des variables (_name, _hitPoints, etc.)
// Des méthodes (attack, takeDamage, beRepaired)
// Mais peut les redéfinir (comme on l'a fait avec attack)
// on a gardé les variables en protected pour permettre à ScavTrap
// de les modifier directement pour ses propres besoins (HP=100, EP=50, etc.)