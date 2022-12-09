/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:28:52 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 21:15:18 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_CLASS_HPP
# define Harl_CLASS_HPP

#include <iostream>

class Harl
{
public:

	Harl(void);
	~Harl(void);

	void complain(std::string level) const;

private:

	void _debug(void) const;
	void _info(void) const;
	void _warning(void) const;
	void _error(void) const;
	
	std::string _levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
		};
	
	void (Harl::*_actions[4])(void) const = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
};

#endif
