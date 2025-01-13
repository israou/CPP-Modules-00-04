/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:27:59 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/13 21:44:15 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "\nDEBUG level:\n" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nINFO level:\n" << std::endl;
	harl.complain("INFO");

	std::cout << "\nWARNING level:\n" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nERROR level:\n" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nINVALID level!\n" << std::endl;
	harl.complain("INVALID");
}