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


#include "main.hpp"


uintptr_t serialize(Data* ptr){ 
	return(reinterpret_cast<uintptr_t&>(ptr));
}

Data* deserialize(uintptr_t raw){
	return(reinterpret_cast<Data*>(raw));
}

int main( void )
{
	Data 		a;
	uintptr_t 	b = 0;
	Data 		*c = NULL;

	std::cout << "------------------Making Struct------------------" << std::endl;
	a.a = 42;
	a.text = "Struct is not empty!";
	std::cout << "Data a = " << a.a << "  text = " << a.text << std::endl;
	std::cout << "&a : " << &a << " b : " << b << " ap: " << c << std::endl <<std::endl;

	std::cout << "----------------Put Struct on intPTR-------------" << std::endl;
	b = serialize(&a);
	std::cout << "&a : " << &a << " b : " << b << " ap: " << c << std::endl <<std::endl;

	std::cout << "----------------Put inPTR on data PTR------------" << std::endl;
	c = deserialize(b);
	std::cout << "Data c = " << c->a << "  text = " << c->text << std::endl;
	std::cout << "&a : " << &a << " b : " << b << " ap: " << c << std::endl <<std::endl;

	return (0);
}
