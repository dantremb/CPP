/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 23:03:20 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:

	Brain	*_brain;

public:

	Cat(void);
	Cat(const Cat &src);
	virtual ~Cat(void);

	Cat		&operator=(const Cat &src);
	
	virtual void		makeSound(void) const;
	std::string			getType(void) const;
};

#endif