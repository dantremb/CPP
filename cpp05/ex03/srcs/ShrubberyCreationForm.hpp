/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:45 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:31:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {
	
public:

		ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm(const std::string target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
		
		virtual void execute(Bureaucrat const & user) const;
};

#endif
