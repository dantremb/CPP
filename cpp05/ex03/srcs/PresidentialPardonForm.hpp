/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:30 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:16:31 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
	
public:

		PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm(const std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& src);

		virtual void execute(Bureaucrat const & user) const;
};

#endif
