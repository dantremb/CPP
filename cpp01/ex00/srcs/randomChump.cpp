/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:02:50 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 11:50:36 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"

void	randomChump(std::string name){
	Zombie	zombie(name);
	
	zombie.announce();
}