/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 14:31:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	this->_name = "No name";
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &newValue){
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = newValue;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
	std::cout << "FragTrap Custom constructor called" << std::endl;
	this->_type = "FragTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &newValue) {
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &newValue){
		this->_name = newValue._name;
		this->_hitPoints = newValue._hitPoints;
		this->_energyPoints = newValue._energyPoints;
		this->_attackDamage = newValue._attackDamage;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << this->_type << this->_name << " want to make High Fives with others !!!" << std::endl;
}
