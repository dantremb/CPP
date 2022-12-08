/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:37:39 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:16:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
# include <iostream>
# include "Weapon.class.hpp"

class HumanB
{
public:

	HumanB(std::string name);
	~HumanB(void);

	void			attack(void) const;
	void			setWeapon(Weapon &set);
	
private:

	std::string		_name;
	Weapon			*_weapon;

};

#endif
