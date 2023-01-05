/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:52:14 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:52:14 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Serialise.hpp"
#include <iostream>

int main( void )
{
	std::cout << "Create a Data struct called 'a', pointer of Data struct called 'ap', and uintptr_t called 'b'." << std::endl;
	Data a;
	Data *ap = NULL;
	uintptr_t b = 0;
	std::cout << "a: " << &a << " - b: " << b << " - ap: " << ap << std::endl << std::endl;

	std::cout << "In struct a: \n";
	std::cout << "Int a = " << a.a << std::endl;
	std::cout << "Int b = " << a.b << std::endl;
	std::cout << "text = " << a.text << std::endl << std::endl;

	std::cout << "Serialize a to a uintptr_t called b" << std::endl;
	b = serialize(&a);
	std::cout << "a: " << &a << " - b: " << b << " - ap: " << ap << std::endl <<std::endl;

	std::cout << "deserialize b to a pointer of Data ap." << std::endl;
	ap = deserialize(b);
	std::cout << "In ptr struct ap: \n";
	std::cout << "Int a = " << ap->a << std::endl;
	std::cout << "Int b = " << ap->b << std::endl;
	std::cout << "text = " << ap->text << std::endl;
	std::cout << "a: " << &a << " - b: " << b << " - ap: " << ap << std::endl;
	return (0);
}