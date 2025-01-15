/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:51:23 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/15 22:08:59 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];//default diali ela qbel chaque zombie
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
// Zombie* horde = (Zombie*)malloc(sizeof(Zombie) * N);
// for (int i = 0; i < N; i++)
// {
//		new (&horde[i]) Zombie();//constructeur par défaut pour chaque élément
// }