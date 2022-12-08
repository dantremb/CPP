/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:26:45 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 11:50:15 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"

Zombie::Zombie(std::string init_name){
	std::cout << "Create a zombie" << std::endl;
	this->_name = init_name;
	return;
}

Zombie::~Zombie(void){
	std::cout << "kill " << this->_name << " the zombie!" << std::endl;
	return;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
