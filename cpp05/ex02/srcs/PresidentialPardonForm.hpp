/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:28:23 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:59:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
	
public:
		PresidentialPardonForm(); // Constructeur par défaut
        PresidentialPardonForm(const PresidentialPardonForm&); // Constructeur de recopie
		PresidentialPardonForm(const std::string target);
        virtual ~PresidentialPardonForm(); // Destructeur éventuellement virtuel
        PresidentialPardonForm &operator=(const PresidentialPardonForm&); // Operator d'affectation

		virtual void execute(Bureaucrat const & executor) const;
private:
};

#endif // __PRESIDENTIALPARDONFORM_H__