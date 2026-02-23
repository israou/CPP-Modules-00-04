/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:05:30 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:52:33 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure& other);
		virtual ~Cure();
		Cure& operator=(const Cure& other);

		virtual AMateria* clone() const;
		virtual	void		use(ICharacter& target);
};
#endif