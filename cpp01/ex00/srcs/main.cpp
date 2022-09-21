/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:26:38 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/20 23:55:15 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"
#include <iostream>
#include <string>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
	
int		main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Heap");
	zombie->announce();
	delete zombie;
	randomChump("Stack");
	return (0);
}
