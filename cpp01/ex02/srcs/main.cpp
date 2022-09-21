/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:20:51 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/21 00:32:58 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string stringONE = "HI THIS IS BRAIN";
	std::string stringTWO = "You should die Zombie!!!";
	std::string *stringPTR = &stringONE;
	std::string &stringREF = stringONE;

	std::cout << "stringONE = " << stringONE << std::endl;
	std::cout << "stringONE address = " << &stringONE << std::endl;
	
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringPTR address = " << stringPTR << std::endl;
	
	std::cout << "stringREF = " << stringREF << std::endl;
	std::cout << "stringREF address = " << &stringREF << std::endl;

	std::cout << "stringTWO = "	<< stringTWO << std::endl;
	std::cout << "stringREF = stringTWO" << std::endl;
	
	stringREF = stringTWO;
	
	std::cout << "stringONE = " << stringONE << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
	
	return (0);
}