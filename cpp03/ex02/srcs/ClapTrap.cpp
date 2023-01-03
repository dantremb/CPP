/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:14:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("No name"), _type("ClapTrap ") , _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _type("ClapTrap "), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Custom constructor called" << std::endl;
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
	this->_type = newValue._type;
	this->_hitPoints = newValue._hitPoints;
	this->_energyPoints = newValue._energyPoints;
	this->_attackDamage = newValue._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const &target){
	if (this->_hitPoints <= 0)
		std::cout << this->_type << this->_name << " is already dead!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_type << this->_name << " is out of energy!" << std::endl;
	else {
		std::cout << this->_type << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints <= 0)
		std::cout << this->_type << this->_name << " is already dead!" << std::endl;
	else {
		std::cout << this->_type << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints <= 0)
		std::cout << this->_type << this->_name << " is already dead!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_type << this->_name << " is out of energy!" << std::endl;
	else {
		std::cout << this->_type << this->_name << " is repaired for " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
	}
}