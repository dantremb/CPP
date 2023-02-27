/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:19:58 by dantremb          #+#    #+#             */
/*   Updated: 2023/02/27 13:14:28 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
	_str = NULL;
}

RPN::RPN(char *str){
	_str = str;
}

RPN::RPN(RPN const &src){
	*this = src;
}

RPN::~RPN(){
}

RPN &RPN::operator=(RPN const &rhs){
	if (this != &rhs){
		_str = rhs._str;
	}
	return *this;
}

void RPN::calculate(){
	std::list<char> mylist;

	for (int i = 0; _str[i]; i++){
		if (_str[i] != ' '){
			mylist.insert(mylist.end(), _str[i]);
		}
	}

	if (mylist.size() < 2){
		std::cout << "Error" << std::endl;
		return;
	}

	std::list<char>::iterator it = mylist.begin();
	/*if (!isdigit(it++) || !isdigit(it)){
		std::cout << "Error" << std::endl;
		return;
	}*/
	for (std::list<char>::iterator it = mylist.begin(); it != mylist.end(); ++it){
		std::cout << *it;
	}
}
