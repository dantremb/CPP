/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:15:48 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	this->_name = "No name";
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &newValue){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = newValue;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Custom constructor called" << std::endl;
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &newValue) {
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &newValue){
		this->_name = newValue._name;
		this->_hitPoints = newValue._hitPoints;
		this->_energyPoints = newValue._energyPoints;
		this->_attackDamage = newValue._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate(void) const {
	std::cout << this->_type << this->_name << " has entered in Gate keeper mode" << std::endl;
}
