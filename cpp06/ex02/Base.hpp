/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:51:57 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:51:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class A;
class B;
class C;

class Base
{
	public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif