/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/12 10:41:25 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &newValue) {
	std::cout << "Copy constructor called" << std::endl;
	*this = newValue;
}

Fixed::Fixed(const int nbr) : _value(nbr << _bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) : _value(roundf(nbr * (float)(1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &nbr) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &nbr)
		this->_value = nbr.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int Fixed::toInt(void) const {
	return this->_value >> _bits;
}

float Fixed::toFloat(void) const {
	return (float)this->_value / (float)(1 << _bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &nbr) {
	out << nbr.toFloat();
	return out;
}