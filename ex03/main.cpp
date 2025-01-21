/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:57:38 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/21 19:02:21 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	// Création d'un triangle
	Point a(0.0f, 0.0f);	// Point en bas à gauche
	Point b(10.0f, 0.0f);   // Point en bas à droite
	Point c(5.0f, 10.0f);   // Point en haut au milieu

	std::cout << "\n=== Tests avec différents points ===" << std::endl;

	// Test 1: Point clairement à l'intérieur
	Point p1(5.0f, 5.0f);
	if (bsp(a, b, c, p1))
		std::cout << "Point (5,5) est dans le triangle" << std::endl;
	else
		std::cout << "Point (5,5) est hors du triangle" << std::endl;

	// Test 2: Point clairement à l'extérieur
	Point p2(15.0f, 15.0f);
	if (bsp(a, b, c, p2))
		std::cout << "Point (15,15) est dans le triangle" << std::endl;
	else
		std::cout << "Point (15,15) est hors du triangle" << std::endl;

	// Test 3: Point sur un sommet
	Point p3(0.0f, 0.0f);
	if (bsp(a, b, c, p3))
		std::cout << "Point (0,0) est dans le triangle" << std::endl;
	else
		std::cout << "Point (0,0) est hors du triangle" << std::endl;

	// Test 4: Point sur une arête
	Point p4(5.0f, 0.0f);
	if (bsp(a, b, c, p4))
		std::cout << "Point (5,0) est dans le triangle" << std::endl;
	else
		std::cout << "Point (5,0) est hors du triangle" << std::endl;

	// Test 5: Point proche d'une arête (mais à l'intérieur)
	Point p5(5.0f, 0.1f);
	if (bsp(a, b, c, p5))
		std::cout << "Point (5,0.1) est dans le triangle" << std::endl;
	else
		std::cout << "Point (5,0.1) est hors du triangle" << std::endl;

	// Test 6: Point proche d'un sommet (mais à l'extérieur)
	Point p6(-0.1f, -0.1f);
	if (bsp(a, b, c, p6))
		std::cout << "Point (-0.1,-0.1) est dans le triangle" << std::endl;
	else
		std::cout << "Point (-0.1,-0.1) est hors du triangle" << std::endl;

	// Test 7: Point au centre du triangle
	Point p7(5.0f, 3.33f);
	if (bsp(a, b, c, p7))
		std::cout << "Point (5,3.33) est dans le triangle" << std::endl;
	else
		std::cout << "Point (5,3.33) est hors du triangle" << std::endl;

	return 0;
}