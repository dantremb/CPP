/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:37:34 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:16:50 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
# include <iostream>
# include "Weapon.class.hpp"

class HumanA
{
public:

	HumanA(std::string name, Weapon &set);
	~HumanA(void);

	void			attack(void) const;
	
private:

	std::string		_name;
	Weapon			&_weapon;

};

#endif
