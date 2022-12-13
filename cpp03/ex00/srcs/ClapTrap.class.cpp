/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/12 23:40:48 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _name("No name"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &newValue){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = newValue;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Destructor called" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &newValue){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = newValue._name;
	this->_hitPoints = newValue._hitPoints;
	this->_energyPoints = newValue._energyPoints;
	this->_attackDamage = newValue._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target){
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
	}
}