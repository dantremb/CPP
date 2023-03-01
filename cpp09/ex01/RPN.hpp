/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:19:55 by dantremb          #+#    #+#             */
/*   Updated: 2023/03/01 14:41:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	public:
		RPN(void);
		RPN(RPN const &src);
		~RPN(void);
		void	DoCalculation(char *av);
		RPN &operator=(RPN const &rhs);

	private:
		std::stack<float>  _stack;

};

#endif