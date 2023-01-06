/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:50:50 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:50:50 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void	swap(T &src1, T &src2){
	T temp = src1;
	src1 = src2;
	src2 = temp;
}

template <typename T> T min(T const& first, T const& second){ 
	return (first < second ? first : second); 
}

template <typename T> T max(T const& first, T const& second) { 
	return (first > second ? first : second);
}

#endif