/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:19:55 by dantremb          #+#    #+#             */
/*   Updated: 2023/02/27 13:01:31 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <list>
#include <string>

class RPN
{
	public:
		RPN();
		RPN(char *str);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &rhs);
		void calculate();

	private:

		char	*_str;
};

#endif