/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:30:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/20 21:36:00 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

		std::string	_type;
		
	public:
	
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);

		WrongAnimal		&operator=(WrongAnimal const & src);

		std::string			getType(void) const;
		void		makeSound(void) const;

};

#endif
