/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:20:39 by ichaabi           #+#    #+#             */
/*   Updated: 2024/12/24 02:17:48 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

bool	is_only_digits(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	Contact::setFirstName(std::string str)
{
	if (str.empty())
	{
		std::cout << "FIRST NAME CANNOT BE EMPTY !" << std::endl;
		return ;
	}
	FirstName = str;
}

void	Contact::setLastName(std::string str)
{
	if (str.empty())
	{
		std::cout << "LAST NAME CANNOT BE EMPTY !" << std::endl;
		return ;
	}
	LastName = str;
}

void	Contact::setNickName(std::string str)
{
	if (str.empty())
	{
		std::cout << "NICK NAME CANNOT BE EMPTY !" << std::endl;
		return ;
	}
	NickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	if (str.empty())
	{
		std::cout << "PHONE NUMBER CANNOT BE EMPTY !";
		return ;
	}
	if (!is_only_digits(str))
	{
		std::cout << "PHONE NUMBER MUST CONTAIN ONLY DIGITS !" << std::endl;
		return ;
	}
	PhoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	if (str.empty())
	{
		std::cout << "DARKEST SECRET CANNOT BE EMPTY !" << std::endl;
		return ;
	}
	DarkestSecret = str;
}

std::string Contact::getFirstName() const
{
	return (FirstName);
}

std::string Contact::getLastName() const
{
	return (LastName);
}

std::string Contact::getNickName() const
{
	return (NickName);
}

std::string Contact::getPhoneNumber() const
{
	return (PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (DarkestSecret);
}
