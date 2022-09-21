/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:02:50 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/21 00:02:15 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.class.hpp"

Zombie *zombieHorde(int N, std::string name){
	
	Zombie	*zombie = new Zombie[N];
	
	for (int i = 0; i < N; i++){
		zombie[i].setName(name);
	}
	return (zombie);
}
