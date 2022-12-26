/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:39 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 22:35:17 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src._type), _brain(new Brain()) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &src){
		this->_type = src._type;
		for (int i = 0; i < 100; i++)
			this->_brain->ideas[i] = src._brain->ideas[i];
	}
	return *this;
}

std::string Dog::getType(void) const {
	return this->_type;
}

void Dog::makeSound(void) const {
	std::cout << "Dog sound" << std::endl;
	return;
}
