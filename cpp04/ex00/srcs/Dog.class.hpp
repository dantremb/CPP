/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:31 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 16:14:10 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include "Animal.class.hpp"

class Dog : public Animal
{
public:

	Dog(void);
	Dog(std::string type);
	Dog(const Dog &src);
	~Dog(void);

	Dog		&operator=(const Dog &src);

};

#endif
