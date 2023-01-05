/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:46:46 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/04 20:46:46 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const& str) :_str(str), _isNumber(false){
	this->detectType();
}

Convert::Convert(Convert const& src) :_str(src._str), _nbr(src._nbr), _isNumber(src._isNumber){
}

Convert::~Convert(){
}

void	Convert::detectType(){
	std::stringstream ss;
	ss << _str;
	ss >> this->_nbr;
	ss.fail() ? _isNumber = false : _isNumber = true;
}

void Convert::printResult() const
{
	if (_nbr >= 0 && _nbr <= 127 && _isNumber)
		(_nbr >= 32 && _nbr <= 126)? std::cout << "char : " << static_cast<char>(_nbr) << std::endl : std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : impossible" << std::endl;
	if (_isNumber){
	 	std::cout << "int: " << static_cast<int>(this->_nbr)  << std::endl;
		std::cout << "float: " <<  static_cast<float>(this->_nbr)  << ((static_cast<float>(this->_nbr) - static_cast<int>(this->_nbr) == 0) ? ".0" : " ") << "f" << std::endl;
		std::cout << "double: " <<  static_cast<double>(this->_nbr)  << ((static_cast<double>(this->_nbr) - static_cast<int>(this->_nbr) == 0) ? ".0" : " ") << std::endl;
		return;
	}
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}
