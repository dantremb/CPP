/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:58:36 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{	
public:

	WrongCat(void);
	WrongCat(const WrongCat &src);
	virtual ~WrongCat(void);

	WrongCat		&operator=(const WrongCat &src);
	
	std::string			getType(void) const;
	void		makeSound(void) const;
};

#endif
