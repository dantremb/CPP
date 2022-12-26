/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:35:49 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknow") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
	return;
}

