/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:58:26 by dantremb          #+#    #+#             */
/*   Updated: 2022/09/20 23:45:43 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>

class Zombie
{
public:

	// Constructors and destructors
	Zombie(void);
	~Zombie(void);

	// Use to annonce the zombie to STDOUT
	void		announce(void);
	// Use to set the zombie name
	void		setName(std::string name);
	
private:

	// Zombie's name
	std::string _name;

};

#endif
