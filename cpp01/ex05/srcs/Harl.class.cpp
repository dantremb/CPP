/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:28:48 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 20:35:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void Harl::complain(std::string level) const{
	for (int i = 0; i < 4; i++){
		if (level == _levels[i]){
			(this->*_actions[i])();
			return;
		}
	}
	std::cout << "Invalid level" << std::endl;
}

void Harl::_debug(void) const{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do !" << std::endl;
}

void Harl::_info(void) const{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::_warning(void) const{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) const{
	std::cout << "This is unacceptable ! I want to speak to the manager now." <<std::endl;
}
