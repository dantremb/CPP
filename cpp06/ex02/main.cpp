/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:52:08 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:52:08 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

int main ( void )
{
	Base *first =  generate();
	identify(first);
	identify(*first);
	delete first;

	return (0);
}