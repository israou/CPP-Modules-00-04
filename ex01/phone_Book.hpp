/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_Book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:14:48 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/04 21:19:42 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP


#include "contact.hpp"
#include <iostream>
#include <iomanip>//formater l affichage des flux

// Réserve un espace de 10 caractères pour l'affichage
// Aligne le texte à droite par défaut dans cet espace
// setw()Fait partie de la bibliothèque <iomanip>
class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;

	public :
	PhoneBook(); //le constructeur
	void	addContact();
	void	searchContact();
	std::string formatage(std::string str) const; //pour formater l affichage
	//cette méthode ne modifie pas l'état de l'objet sur lequel elle est appelée

};

bool	is_only_digits(const std::string &str);
#endif