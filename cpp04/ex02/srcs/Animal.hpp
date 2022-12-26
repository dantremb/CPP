/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 23:01:58 by dantremb         ###   ########.fr       */
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

		virtual void		makeSound(void) const = 0;
		std::string			getType(void) const;

};

#endif
