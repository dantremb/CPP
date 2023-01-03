/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:15:54 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:

	ScavTrap(void);
	ScavTrap(const ScavTrap &newValue);
	ScavTrap(const std::string name);
	~ScavTrap(void);

	ScavTrap&	operator=(const ScavTrap &newValue);

	void	guardGate(void) const;

};

#endif
