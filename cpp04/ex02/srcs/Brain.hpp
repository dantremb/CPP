/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/25 22:34:17 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
	
		Brain(void);
		Brain(Brain const &src);
		virtual ~Brain(void);

		Brain		&operator=(Brain const & src);
		std::string	ideas[100];

};

#endif
