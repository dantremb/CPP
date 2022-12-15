/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:36 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
private:

public:

	FragTrap(void);
	FragTrap(const FragTrap &newValue);
	FragTrap(const std::string name);
	~FragTrap(void);

	FragTrap&	operator=(const FragTrap &newValue);

	void	highFivesGuys(void) const;

};

#endif
