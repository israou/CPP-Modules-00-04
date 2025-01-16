/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 19:56:25 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/16 04:47:21 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("Heapie");
	heapZombie->announce();

	randomChump("Stackie");

	delete heapZombie;
	return (0);
}