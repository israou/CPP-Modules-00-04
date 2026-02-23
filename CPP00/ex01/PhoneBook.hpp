/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:14:48 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/12 23:39:06 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include "Contact.hpp"
#include <iostream>       
#include <iomanip>
#include <limits>

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;

	public :
	PhoneBook();
	void	addContact();
	void	searchContact();
	std::string formatage(std::string str) const;

};

bool	is_only_digits(const std::string &str);
bool	is_printables(const std::string &str);
#endif