/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:17:17 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 02:19:07 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private :
		std::string ideas[100];
	public :
		Brain();
		~Brain();
		Brain&	operator=(const Brain& other);
		Brain(const Brain& other);
};
#endif