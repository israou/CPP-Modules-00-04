/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:01:05 by ichaabi           #+#    #+#             */
/*   Updated: 2024/12/21 23:11:54 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];//objet de type std::string
		for(size_t j = 0; j < str.length(); j++)//.length fonction membre de la classe string
			std::cout << (char)std::toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}

//std::cout equivalent de printf pour l'affichage sur la console
//std::endl retour a la ligne (equivalent de \n)
//std::string classe pour gerer les chaines de caracteres
//std::toupper() fonction pour convertir en majuscule
//le std est necessaire car nous n utilisons pas using namespace std
// str est un objet de type std::string
// .length()est une méthode (fonction membre) de la classe string
// Elle retourne la longueur de la chaîne
// C'est l'équivalent de strlen()en C mais en plus sûr et plus efficace
//le cast (char) parce que toupper
// Notez la syntaxe avec le point : en C++, en accédant aux méthodes d'un objet avec le point
//en c c est strlen(str) en cpp str.length()
// La fonction std::toupper()retourne un intreprésentant le caractère en majuscule, et non un chardirectement
// int toupper(int ch)
// Pourquoi elle retourne un int?
// Pour des raisons historiques liées à l'ASCII
// Pour pouvoir gérer EOF (-1) et des valeurs étendues
// Pour respecter la plage complète des caractères possibles (0-255)
// str[j]donner un caractère
// std::toupper(str[j])convertit en majuscule et retourne un int
// (char)cast cet int en char pour l'affichage
//sans le cast ca fonctionnerai car cout sait gerer les int, mais seule la valeur ascii sera affichée plutot que le caractere lui meme
