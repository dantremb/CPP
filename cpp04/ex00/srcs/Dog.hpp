/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:31 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:58:29 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:

	Dog(void);
	Dog(std::string type);
	Dog(const Dog &src);
	virtual ~Dog(void);

	Dog		&operator=(const Dog &src);

	std::string			getType(void) const;
	virtual void		makeSound(void) const;
};

#endif
