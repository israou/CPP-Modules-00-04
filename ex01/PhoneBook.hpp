/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:14:48 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/08 19:04:12 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
	private:
		Contact	contacts[8];//Chaque objet PhoneBook aura son propre ensemble de 8 objets Contact
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