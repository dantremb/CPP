/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:15:45 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:23:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
#include "Weapon.class.hpp"

HumanA::HumanA(std::string name, Weapon &set) : _name(name), _weapon(set){
}

HumanA::~HumanA(void){
}

void	HumanA::attack(void) const{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
