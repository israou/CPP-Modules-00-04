/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 00:38:41 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/25 01:10:30 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
// 	ClapTrap robot("ROBIO_2.0");

// 	robot.attack("enemy");
// 	robot.takeDamage(8);
// 	robot.beRepaired(42424242999);

// 	return (0);
// }

int main()
{
	ClapTrap robot("ROBIO_2.0");

	//t1: Dépasser la limite d'énergie
	for(int i = 0; i < 11; i++)
	{
		robot.attack("enemy"); // Au 11ème appel: pas assez d'énergie
	}

	//t2: Points de vie à 0
	robot.takeDamage(15);//hp a 0
	robot.beRepaired(5);//ne peut pas se reparer pske HP = 0

	//t3: overflow des points de vie
	ClapTrap robot2("ROBIO_3.0");
	robot2.beRepaired(UINT_MAX); // Erreur: dépassement maximum
}

//ClapTrap est un robot avec :
//_hitPoints -> point de vie (10)
//_energyPoints -> points d energie (10)
//_attackDamage ->degats d'attack (0)
//_name

//il peut faire 3 actions :
//attack : -1 _energyPoints
//takeDamage : subir des degats : -hitPoints
//beRepared : +hitPoints -energyPoints

//les regles:
//le robot ne peut rien faire s il na plus d energie
//il ne peut rien faire s il n a plus de vie
