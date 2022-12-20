/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/19 15:55:16 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include "DiamondTrap.class.hpp"

class DiamondTrap : public DiamondTrap
{
private:

public:

	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &newValue);
	DiamondTrap(const std::string name);
	~DiamondTrap(void);

	DiamondTrap&	operator=(const DiamondTrap &newValue);

	void	highFivesGuys(void) const;

};

#endif
