/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 01:14:27 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/04 21:35:47 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_Book.hpp"
#include <limits>

int main(int ac, char **av)
{
	PhoneBook phonebook;
	std::string command;

	(void)av;
	if (ac != 1)
	{
		std::cout << " INVALID ARGUMENTS !" << std::endl;
		return (-1);
	}
	while (true)
	{
		std::cout << "ENTER COMMAND (ADD, SEARCH OR EXIT)" << std::endl;
		std::getline(std::cin, command);

		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}