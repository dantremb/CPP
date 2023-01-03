/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:26 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:52:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
		Form("PresidentialPardonForm", "Default", false, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : 
		Form(src.getName(), 
		src.getTarget(), 
		src.getIsSigned(), 
		src.getGradeToSign(), 
		src.getGradeToExec()) {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): 
		Form("PresidentialPardonForm", target, false, 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & user) const {
	validateExecute(user);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
