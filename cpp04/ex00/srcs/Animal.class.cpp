/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 16:11:47 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &src) {
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
	return;
}

