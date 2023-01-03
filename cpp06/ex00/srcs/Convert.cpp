/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:45:52 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 15:28:51 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() :
		_char('\0'), 
		_int(0), 
		_float(0.0f), 
		_double(0.0),
		_value("NULL") {
}

Convert::Convert(const Convert& src) :
		_value(src._value), 
		_char(src._char), 
		_int(src._int), 
		_float(src._float), 
		_double(src._double) {
}

Convert::Convert(const std::string value) :
		_value(value),
		_char('\0'),
		_int(0),
		_float(0.0f),
		_double(0.0) {
}

Convert::~Convert() {
}

Convert& Convert::operator=(const Convert& src) {
	if (this != &src)
	{
		_value = src._value;
		_char = src._char;
		_int = src._int;
		_float = src._float;
		_double = src._double;
	}
	return *this;
}

void	Convert::convertToChar() {
	_char = static_cast<char>(_value);
}

void	Convert::convertToInt() {
	_int = static_cast<int>(_value);
}

void	Convert::convertToFloat() {
	_float = static_cast<float>(_value);
}

void	Convert::convertToDouble() {
	_double = static_cast<double>(_value);
}

std::ostream &operator<<(std::ostream &out, Convert const &src) {
	if (src._char != '\0')
		out << "char: " << src._char << std::endl;
	else
		out << "char: impossible" << std::endl;
	
	if (src._int != 0)
		out << "int: " << src._int << std::endl;
	else
		out << "int: impossible" << std::endl;

	if (src._float != 0.0f)
		out << "float: " << src._float << std::endl;
	else
		out << "float: impossible" << std::endl;

	if (src._double != 0.0)
		out << "double: " << src._double << std::endl;
	else
		out << "double: impossible" << std::endl;
	return out;
}
