/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:02:50 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 11:50:40 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"

Zombie*	newZombie(std::string name){
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}