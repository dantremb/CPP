/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:22 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 10:18:07 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern user;
	Form* newForm;
	newForm = user.makeForm("robotomy request", "homer");

	Bureaucrat ned("Ned", 20);
	std::cout << ned;
	ned.signForm(*newForm);
	ned.executeForm(*newForm);
	delete newForm;
	std::cout << std::endl;


	newForm = user.makeForm("shrubbery creation", "lisa");
	ned.signForm(*newForm);
	ned.executeForm(*newForm);
	delete newForm;
	std::cout << std::endl;

	newForm = user.makeForm("presidential pardon", "bart");
	ned.signForm(*newForm);
	ned.executeForm(*newForm);
	delete newForm;
	std::cout << std::endl;

	newForm = user.makeForm("barney", "maggie");
	delete newForm;
	
	return 0;
}