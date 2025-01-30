/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:07:08 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/30 22:16:23 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

#include <iostream>

class	ICharacter;

class	AMateria
{
	protected :
		std::string type;
	public :
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria& other);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual	void use(ICharacter& target);
};
#endif
