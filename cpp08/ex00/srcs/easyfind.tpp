/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:49:58 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:49:58 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

template<typename T> void easyfind(T &array, int nbr)
{
	typename T::iterator result = std::find(array.begin(), array.end(), nbr);
	if (result != array.end())
	{
		std::cout << "Number " << *result << " Found!" << std::endl;
		return ;
	}
	throw std::invalid_argument ("Not found!");
}