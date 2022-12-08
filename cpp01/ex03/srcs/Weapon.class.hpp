/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:29:08 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 13:14:13 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP
# include <iostream>

class Weapon
{
public:

	Weapon(std::string	type);
	~Weapon(void);

	std::string	&getType(void);
	void		setType(std::string newtype);

private:

	std::string _type;

};

#endif
