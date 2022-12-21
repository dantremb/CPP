/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:58:24 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{	
public:

	Cat(void);
	Cat(const Cat &src);
	virtual ~Cat(void);

	Cat		&operator=(const Cat &src);
	
	std::string			getType(void) const;
	virtual void		makeSound(void) const;
};

#endif