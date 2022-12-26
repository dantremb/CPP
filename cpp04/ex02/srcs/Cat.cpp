/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:26 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 22:35:28 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src): Animal(), _brain(new Brain()) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &src){
		this->_type = src._type;
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = src._brain->ideas[i];
	}
	return *this;
}

std::string Cat::getType(void) const {
	return this->_type;
}

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
	return;
}