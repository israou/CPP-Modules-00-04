/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:26:54 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:50:23 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice& other);
		virtual ~Ice();
		Ice&	operator=(const Ice& other);

		virtual	AMateria*	clone()const;
		virtual	void		use(ICharacter& target);
};

#endif