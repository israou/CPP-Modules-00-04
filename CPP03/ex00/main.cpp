/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 00:38:41 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/26 22:19:31 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap robot("ROBIO_2.0");

	for(int i = 0; i < 11; i++)
	{
		robot.attack("enemy");
	}
	std::cout << "" << std::endl;
	robot.takeDamage(15);
	robot.beRepaired(5);

	std::cout << "" << std::endl;
	ClapTrap robot2("ROBIO_3.0");
	robot2.beRepaired(UINT_MAX);
}
