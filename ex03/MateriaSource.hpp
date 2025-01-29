/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:21:02 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 23:48:36 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private :
		AMateria* learned[4]; //tableau pour stocker jusqu a 4 materia

	public :
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		virtual ~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& other);

		virtual	void	learnMateria(AMateria*);
		virtual	AMateria* createMateria(std::string const & type);
};

#endif