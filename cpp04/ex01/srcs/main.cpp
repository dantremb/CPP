/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:46 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 22:23:41 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal *animals[20];

	for(int i = 0; i < 10; i++){
		animals[i] = new Dog();
	}
	for(int i = 10; i < 20; i++){
		animals[i] = new Cat();
	}

	for(int i = 0; i < 20; i++){
		animals[i]->makeSound();
	}

	for(int i = 0; i < 20; i++){
		delete animals[i];
	}
	
	return 0;
}

