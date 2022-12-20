/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/19 15:51:07 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(){
	this->_name = "No name";
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const FragTrap &newValue){
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = newValue;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name){
	std::cout << "DiamondTrap Custom constructor called" << std::endl;
	this->_type = "DiamondTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &newValue) {
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if (this != &newValue){
		this->_name = newValue._name;
		this->_hitPoints = newValue._hitPoints;
		this->_energyPoints = newValue._energyPoints;
		this->_attackDamage = newValue._attackDamage;
	}
	return *this;
}

void	DiamondTrap::highFivesGuys(void) const {
	std::cout << this->_type << this->_name << " want to make High Fives with others !!!" << std::endl;
}
