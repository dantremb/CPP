/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:26 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:24:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = src._type;
	return *this;
}

std::string Cat::getType(void) const {
	return this->_type;
}

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
	return;
}