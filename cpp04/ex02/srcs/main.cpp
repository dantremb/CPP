/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:46 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 23:04:08 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//Animal	*cat1 = new Animal();
	Cat		*cat1 = new Cat();
	
	std::cout << std::endl;
	cat1->makeSound();
	std::cout << std::endl;

	delete cat1;
	return 0;
}

