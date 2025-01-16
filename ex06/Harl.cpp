/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:53:47 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/16 04:08:38 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "\n===CONSTRUCTEUR CALLED===\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\n===DESTRUCTEUR CALLED===\n" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << " [ DEBUG ]\n" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\n [ INFO ]\n" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\n [ WARNING ]\n" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\n [ ERROR ]\n" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)//expression == constanste
			break;
	}

	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << " [ Probably complaining about insignificant problems ]" << std::endl;
	}
}
