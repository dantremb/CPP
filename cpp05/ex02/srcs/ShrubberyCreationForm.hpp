/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:55:49 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/03 00:00:51 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form {
	
public:

		ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm(const std::string target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
		
		virtual void execute(Bureaucrat const & executor) const;
};

#endif
