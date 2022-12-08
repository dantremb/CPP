/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:29:28 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:28:54 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(std::string	type) : _type(type){
}

Weapon::~Weapon(void){
}

std::string	&Weapon::getType(void){
	return (this->_type);
}

void	Weapon::setType(std::string newtype){
	this->_type = newtype;
}
