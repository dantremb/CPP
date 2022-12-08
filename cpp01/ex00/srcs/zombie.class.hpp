/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:58:26 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 11:49:55 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <iostream>

class Zombie
{
public:

	// Constructors and destructors
	Zombie(std::string init_name);
	~Zombie(void);

	// Use to annonce the zombie to STDOUT
	void		announce(void);
	
private:

	// Zombie's name
	std::string _name;

};

#endif
