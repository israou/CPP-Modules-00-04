/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:06:57 by ichaabi           #+#    #+#             */
/*   Updated: 2024/12/24 02:20:52 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		void	setFirstName(std:: string str);
		void	setLastName(std:: string str);
		void	setNickName(std:: string str);
		void	setPhoneNumber(std:: string str);
		void	setDarkestSecret(std:: string str);

		std::string getFirstName() const;//const veut dire cette fonction ne modifiera aucun attribut de la classe(objet)
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif