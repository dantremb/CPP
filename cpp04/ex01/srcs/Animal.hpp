/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:59:21 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:

		std::string	_type;
		
	public:
	
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal		&operator=(Animal const & src);

		std::string	getType(void) const;
		virtual void		makeSound(void) const;

};

#endif
