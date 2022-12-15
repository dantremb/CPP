/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:39 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 16:06:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = src._type;
	return *this;
}