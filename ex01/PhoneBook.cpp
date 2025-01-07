/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:52:06 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/07 19:31:25 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

void	PhoneBook::addContact()
{
	std::string input;
	int index = count % 8;

	while (true)
	{
		std::cout << "Enter First Name: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "ERROR: INPUT STREAM CLOSED" << std::endl;
			return ;
		}
		if (!input.empty())
		{
			contacts[index].setFirstName(input);
			break;
		}
		std::cout << "FIRST NAME CANNOT BE EMPTY !" << std::endl;
	}

	while (true)
	{
		std::cout << "Enter Last Name: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "ERROR: INPUT STREAM CLOSED" << std::endl;
			return ;
		}
		if (!input.empty())
		{
			contacts[index].setLastName(input);
			break ;
		}
		std::cout << "LAST NAME CANNOT BE EMPTY !" << std::endl;
	}

	while (true)
	{
		std::cout << "Enter Nick Name: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "ERROR: INPUT STREAM CLOSED" << std::endl;
			return ;
		}
		if (!input.empty())
		{
			contacts[index].setNickName(input);
			break;
		}
		std::cout << "NICK NAME CANNOT BE EMPTY !" << std::endl;
	}

	while (true)
	{
		std::cout << "Enter Phone Number: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "ERROR: INPUT STREAM CLOSED" << std::endl;
			return ;
		}
	if (!input.empty())
	{
		if (is_only_digits(input))
		{
			contacts[index].setPhoneNumber(input);
			break;
		}
		std::cout << "PHONE NUMBER MUST CONTAIN ONLY DIGITS !" << std::endl;
		continue;
	}
	std::cout << "PHONE NUMBER CANNOT BE EMPTY !" << std::endl;
}

	while (true)
	{
		std::cout << "Enter Darkest Secret: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "ERROR: INPUT STREAM CLOSED" << std::endl;
			return ;
		}
		if (!input.empty())
		{
			contacts[index].setDarkestSecret(input);
			break;
		}
		std::cout << "DARKEST SECRET CANNOT BE EMPTY !" << std::endl;
	}
	if (count < 8)
		count++;
}

std::string PhoneBook::formatage(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::searchContact()
{
	if (count == 0)
	{
		std::cout << "No Contacts In PhoneBook" << std::endl;
		return ;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" <<std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << formatage(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << formatage(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << formatage(contacts[i].getNickName()) << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	std::cout << "Enter Index To Display" << std::endl;
	std::string input;
	if (!std::getline(std::cin, input))
	{
		std::cout << "ERROR: INPUT STREAM CLOSED" <<std::endl;
		return ;
	}

	bool	valid = true;
	if (input.length() > 10)
	{
		valid = false;
	}
	else
	{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!std::isdigit(input[i]))
			{
				valid = false;
				break;
			}
		}
	}
	int index;
	if (valid && !input.empty())
		index = std::atoi(input.c_str());
	else
	{
		std::cout << "INVALID INDEX !" << std::endl;
		return ;
	}
	if (index >= 0 && index < count)
	{
		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nick Name: " << contacts[index].getNickName() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid Index!" << std::endl;
}
