/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:01:04 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 11:09:31 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main ()
{
	Convert		convert("42");
	convert.convertToChar();
	std::cout << convert << std::endl;
	convert.convertToInt();
	std::cout << convert << std::endl;
	convert.convertToFloat();
	std::cout << convert << std::endl;
	convert.convertToDouble();
	std::cout << convert << std::endl;
	return 0;
}