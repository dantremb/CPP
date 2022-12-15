/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 16:05:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>

class Animal
{
	protected:

		std::string	_type;
		
	public:
	
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal		&operator=(Animal const & src);

		void		makeSound(void) const;

};

#endif
