/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:20:54 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/16 04:36:35 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "\n===CONSTRUCTOR CALLED===\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\n===DESTRUCTOR CALLED===\n" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	bool	found = false;
	void(Harl::*functions[])(void) = {//tableau de pointeurs sur fonctions : harl::* -> pointeur sur membre de la classe
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			found = true;
			(this->*functions[i])();//appelle la fonction membre correspondante
			break ;
		}
	}
	if (!found)
	{
		std::cerr << "[ Invalid level: " << level << " ]" << std::endl;
	}
}

//fash aneeyet ela harl.complain("DEBUG") fl main
//lprogramm:
//cherche "DEBUG" dans le tableau levels
//trouve l'index (0)
//execute la fonction correspondante dans functions[0] li hya debug...


// Le & est nécessaire car :
// On créé un tableau de pointeurs sur fonctions membres
// Pour avoir un pointeur, on a besoin de l'adresse de la fonction
// &Harl::debug signifie "l'adresse de la fonction debug de la classe Harl"


// this->* est l'opérateur pour accéder à un pointeur sur membre
// On ne peut pas juste faire functions[i]() car il faut spécifier sur quelle instance de Harl appeler la fonction
// this fait référence à l'instance courante de Harl
