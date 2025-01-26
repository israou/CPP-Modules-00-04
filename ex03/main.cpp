/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:44:02 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 21:47:22 by ichaabi          ###   ########.fr       */
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

// Problème du diamant


// Une classe hérite de deux classes qui héritent d'une même classe
// Solution : héritage virtuel (virtual public)
// Résolution d'ambiguïté
// Utiliser using pour choisir la fonction à hériter
// Spécifier explicitement la classe : BaseClass::member
// L'héritage virtuel garantit qu'il n'existe qu'une seule instance de la classe de base commune,
// éliminant ainsi l'ambiguïté.