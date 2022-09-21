/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:26:38 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/21 00:16:50 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"
#include <iostream>
#include <string>

Zombie*	zombieHorde(int N, std::string name);
	
int		main(void)
{
	Zombie	*zombie;
	int		number;
	std::string	name;
	
	std::cout << "How much zombies do you want?" << std::endl;
	std::cin >> number;
	std::cout << "What is the name of your zombies?" << std::endl;
	std::cin >> name;

	zombie = zombieHorde(number, name);
	
	for (int i = 0; i < number; i++)
		zombie[i].announce();

	delete [] zombie;
	return (0);
}
