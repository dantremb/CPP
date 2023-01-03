/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:57:27 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:59:34 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", "Default", false, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
	: Form(src.getName(), src.getTarget(), src.getIsSigned(), src.getGradeToSign(), src.getGradeToExec())
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", target, false, 72, 45)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&) 
{
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	validateExecute(executor);

	std::cout << "BziiiiiIIII RRRRRRR TTTTTT CRACK" << std::endl;
	
	srand(time(NULL));
	bool rand = (std::rand() % 2);
	if (rand)
		std::cout << getTarget() << " has been robotomized successfully! 🤯" << std::endl;
	else
		std::cout << "Ho no! " << getTarget() << " robotomization failed... 😭" << std::endl;
}
