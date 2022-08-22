/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:26:38 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/21 22:52:36 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destroyed" << std::endl;
	return ;
}

std::string Contact::_get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::_get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::_get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::_get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::_get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void Contact::_set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::_set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::_set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::_set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void Contact::_set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

void Contact::print_preview(int index) const
{
	std::cout << "| " << index << " | ";
	std::cout << this->_get_first_name() << " | ";
	std::cout << this->_get_last_name() << " | " ;
	std::cout << this->_get_nickname() << " |" << std::endl;
	return ;
}

void Contact::print_contact(void) const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void Contact::create_contact(void)
{
	std::string buffer;

	std::cout << "First name: ";
	std::getline(std::cin, buffer);
	this->_set_first_name(buffer);
	std::cout << "Last name: ";
	std::getline(std::cin, buffer);
	this->_set_last_name(buffer);
	std::cout << "Nickname: ";
	std::getline(std::cin, buffer);
	this->_set_nickname(buffer);
	std::cout << "Phone number: ";
	std::getline(std::cin, buffer);
	this->_set_phone_number(buffer);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, buffer);
	this->_set_darkest_secret(buffer);
}