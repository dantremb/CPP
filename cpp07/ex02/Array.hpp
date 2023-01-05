/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:51:03 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:51:04 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<class T> class Array
{
	private:
		T				*_array;
		unsigned int	_aindex;

	public:
		Array();
		Array(unsigned int);
		Array(Array<T> const&);
		~Array();

		Array<T>&		operator=(Array<T> const &);
		T&				operator[](unsigned int);
		unsigned int	size() const;
};

#include "./Array.tpp"

#endif