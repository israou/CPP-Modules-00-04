/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:27:59 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/16 04:26:47 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./Harl2.0 [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return (1);
	}
	Harl harl;
	(harl.complain)(av[1]);
}
