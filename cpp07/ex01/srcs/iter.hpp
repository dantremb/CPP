/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:50:54 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:50:54 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T> void	iter(T *addr, size_t stab, void (*fctn)(T const &)) {
	for (int i = 0; i < static_cast<int>(stab); i++)
		fctn(addr[i]);
}

template <typename T> void test(T line) { 
	std::cout << line << std::endl;
}

#endif