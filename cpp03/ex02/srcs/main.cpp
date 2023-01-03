/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:22 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:15:45 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap	first("no1");
	ClapTrap	second("no2");
	ScavTrap	third("no3");
	ScavTrap	four("no4");
	FragTrap	five("no5");
	FragTrap	six("no6");

	first.attack("no2");
	second.takeDamage(0);
	third.guardGate();
	four.attack("no1");
	first.takeDamage(20);
	first.beRepaired(20);
	second.attack("no3");
	third.takeDamage(20);
	five.highFivesGuys();
	six.attack("no5");
	five.takeDamage(30);
	five.beRepaired(30);

	return (0);
}
