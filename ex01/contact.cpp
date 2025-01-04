/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:20:39 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/04 21:25:35 by ichaabi          ###   ########.fr       */
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
	FirstName = str;
}

void	Contact::setLastName(std::string str)
{
	LastName = str;
}

void	Contact::setNickName(std::string str)
{
	NickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	PhoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
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
