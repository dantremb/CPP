/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 22:34:30 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain default constructor called" << std::endl;
	return;
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain &Brain::operator=(Brain const &src) {
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}


