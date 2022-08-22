/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:26:45 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/21 22:41:21 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) : _max_contacts(8), _nb_contacts(0)
{
	//std::cout << "Phonebook created" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Phonebook destroyed" << std::endl;
	return ;
}

void PhoneBook::open_phonebook(void)
{
	std::string	buffer;
	
	while (1)
	{
		std::cout << "PhoneBook > ";
		std::getline(std::cin, buffer);
		if (buffer == "EXIT")
			return ;
		else if (buffer == "SEARCH")
			this->_search_contact();
		else if (buffer == "ADD")
			this->_add_contact();
		else
			continue ;
	}
}

void PhoneBook::_add_contact(void)
{
	if (this->_nb_contacts == this->_max_contacts - 1)
		std::cout << "Phonebook is full, last entry will be ovewrite" << std::endl;
	this->_contacts[_nb_contacts].create_contact();
	if (this->_nb_contacts < this->_max_contacts - 1)
		this->_nb_contacts++;
}

void PhoneBook::_search_contact(void)
{
	for (int i = 0 ; i < this->_nb_contacts ; i++)
	{
		std::cout << "|" << i << "|";
		this->_contacts[i].print_preview();
	}
}
