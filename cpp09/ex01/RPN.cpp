/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:19:58 by dantremb          #+#    #+#             */
/*   Updated: 2023/03/01 15:09:15 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){
	return ;
}

RPN::RPN(RPN const &src){
	*this = src;
	return ;
}

RPN::~RPN(void){
	return ;
}

RPN	&RPN::operator=(RPN const &rhs){
	this->_stack = rhs._stack;
	return (*this);
}

static bool i=IsValidChar(char c){
	if ( c == '*' || c == '/' || c == '+' || c == '-' || ('0' <= c && c <= '9') )
		return (true);
	return (false);
}

static void Error(void)
{
	std::cout << "Error\n";
	std::exit(1);
}

static float chooseOperator(char c, float a, float b)
{
	switch(c)
	{
		case 42:
			return (a * b);
		case 43:
			return (a + b);
		case 45:
			return (a - b);
		case 47:
			return (a / b);
	}
	return (-1.0f);
}

void	RPN::DoCalculation(char *av)
{
	int 	i = 0;
	float	tmp = 0;
	float	result = 0;

	while (av[i]) {
		if (av[i] == ' '){
			i++;
		}
		if (IsValidChar(av[i]) == false){
			Error();
		}
		if ( '0' < av[i]){
			_stack.push( (av[i] - 48) );
			i++;
		}
		else{
			if ( _stack.empty() )
				Error();
			tmp = _stack.top();
			_stack.pop();
			if ( _stack.empty() )
				Error();
			result = chooseOperator(av[i], _stack.top(), tmp);
			_stack.pop();
			_stack.push(result);
			i++;
		}
	}
	std::cout << _stack.top() << std::endl;
}