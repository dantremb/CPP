/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialise.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:52:19 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:52:19 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Serialise.hpp"

uintptr_t serialize(Data* ptr)
{ return(reinterpret_cast<uintptr_t&>(ptr)); }

Data* deserialize(uintptr_t raw)
{ return(reinterpret_cast<Data*>(raw)); }