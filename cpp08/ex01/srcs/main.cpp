/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:50:11 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:50:11 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main( void )
{
	srand (time(NULL));

	std::cout << "----- Test #1 -----" << std::endl;
	Span sp = Span(10000);
	
  	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(15);
	sp.addRandom();
 	try {
		sp.addNumber(34);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch (std::exception &e) { 
		std::cout << e.what() << std::endl;
		return (0);
	}
	std::cout << "Shortest difference: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest difference: " << sp.longestSpan() << std::endl;


	std::cout << std::endl << "----- Test #2 -----" << std::endl;
	Span sp2 = Span(10000);
	std::list<int> itnbr(15000);
	std::generate(itnbr.begin(), itnbr.end(), rand);
	sp2.rangeNumber(itnbr.begin(), itnbr.end());

	try
	{
		sp2.shortestSpan();
		sp2.longestSpan();
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
		return (0);
	}
	std::cout << "Shortest difference: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest difference: " << sp2.longestSpan() << std::endl;

	return (0);
}
