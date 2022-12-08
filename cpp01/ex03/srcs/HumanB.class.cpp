/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:41:24 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:23:07 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"
#include "Weapon.class.hpp"

HumanB::HumanB(std::string name) : _name(name){
}

HumanB::~HumanB(void){
}

void	HumanB::attack(void) const{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &set){
	this->_weapon = &set;
}
