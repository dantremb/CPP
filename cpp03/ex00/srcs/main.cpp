/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:22 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/14 07:25:09 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <iostream>

int main( void )
{
	ClapTrap	karl;
	ClapTrap	steven("steven");

	karl.attack("steven");
	steven.takeDamage(2);
	steven.attack("dummie");
	karl.takeDamage(9);
	karl.beRepaired(3);
	karl.takeDamage(4);
	karl.attack("steven");

	return (0);
}
