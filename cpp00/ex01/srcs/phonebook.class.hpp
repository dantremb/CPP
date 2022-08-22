/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:58:26 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/21 23:25:55 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "contact.class.hpp"

class PhoneBook
{
	
public:

	// Constructors and destructors
	PhoneBook(void);
	~PhoneBook(void);
	
	//Main function to use the phonebook
	void		open_phonebook(void);

private:

	// Attributes can only be accessed by the class itself
	int const	_max_contacts;
	int		 	_nb_contacts;
	Contact 	_contacts[8];
	
	// Private functions to manage the contacts
	void		_add_contact(void);
	void		_search_contact(void);
};

#endif
