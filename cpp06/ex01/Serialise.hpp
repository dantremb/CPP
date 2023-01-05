/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialise.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:52:23 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:52:23 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALISE_HPP
#define SERIALISE_HPP
#include <iostream>

struct Data
{
	int	a = 21;
	int b = 42;
	std::string text = "Struct is not empty!";
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif