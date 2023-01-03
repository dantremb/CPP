/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:22 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:14:00 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap	first("no1");
	ClapTrap	second("no2");
	ScavTrap	third("no3");
	ScavTrap	four("no4");

	first.attack("no2");
	second.takeDamage(0);
	third.guardGate();
	four.attack("no1");
	first.takeDamage(20);
	first.beRepaired(20);
	second.attack("no3");
	third.takeDamage(20);

	return (0);
}
