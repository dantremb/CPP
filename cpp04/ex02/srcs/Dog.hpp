/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:31 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 23:03:16 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

	Brain	*_brain;

public:

	Dog(void);
	Dog(std::string type);
	Dog(const Dog &src);
	virtual ~Dog(void);

	Dog		&operator=(const Dog &src);

	virtual void		makeSound(void) const;
	std::string			getType(void) const;
};

#endif
