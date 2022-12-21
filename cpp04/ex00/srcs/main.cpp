/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:46 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:59:05 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "----------Test with Dynamic Cast----------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << "----------Test with Static Cast----------" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << meta2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;

	meta2->makeSound();
	i2->makeSound();

	delete meta;
	delete j;
	delete i;
	delete meta2;
	delete i2;
}
