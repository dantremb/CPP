/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:28 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:57:16 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat A("jack", 20);
	ShrubberyCreationForm form1("Trees");
	std::cout << A;
	A.signForm(form1);
	A.executeForm(form1);
	std::cout << std::endl;

	Bureaucrat B("Jim", 46);
	RobotomyRequestForm form2("Andrew");
	std::cout << B;
	B.signForm(form2);
	B.executeForm(form2);
	A.executeForm(form2);
	std::cout << std::endl;

	Bureaucrat C("Michael", 2);
	PresidentialPardonForm form3("Pam");
	std::cout << C;
	B.signForm(form3);
	C.signForm(form3);
	C.executeForm(form3);
	
	return 0;
}