/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 16:06:11 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <iostream>
#include "Animal.class.hpp"

class Cat : public Animal
{	
public:

	Cat(void);
	Cat(const Cat &src);
	~Cat(void);

	Cat		&operator=(const Cat &src);

};

#endif