/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 11:14:05 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	
	std::string _name;
	std::string _type;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	
public:

	ClapTrap(void);
	ClapTrap(const ClapTrap &newValue);
	ClapTrap(std::string name);
	~ClapTrap(void);

	ClapTrap		&operator=(const ClapTrap &newValue);

	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};

#endif
