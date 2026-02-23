/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:52:56 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/29 02:37:49 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private :
		Brain*	brain;
	public :
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);

		void	makeSound() const;
};
#endif