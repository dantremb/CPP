/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/12 23:59:31 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
private:
		
public:

	ScavTrap(void);
	ScavTrap(const ScavTrap &newValue);
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &newValue);



};

#endif
