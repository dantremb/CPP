/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:34 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:48:25 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
		Form("RobotomyRequestForm", "Default", false, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): 
		Form(src.getName(), 
		src.getTarget(), 
		src.getIsSigned(), 
		src.getGradeToSign(), 
		src.getGradeToExec()) {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): 
		Form("RobotomyRequestForm", target, false, 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&) {
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	validateExecute(executor);
	std::cout << "ZZZZZZZZZZZZZ crack oups.... ZZZzZZZZZZZZZZZzZZ ok...c'Est bon...ZZZZZzZZZZZZZZZZZZzZZZZZzZZ" << std::endl;
	srand(time(NULL));
	bool rand = (std::rand() % 2);
	if (rand)
		std::cout << getTarget() << " the terminator have been robotomizated" << std::endl;
	else
		std::cout << getTarget() << " robotomization failed" << std::endl;
}
