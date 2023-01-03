/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:38 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:51:49 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm: public Form {
	
public:
		RobotomyRequestForm(); // Constructeur par défaut
        RobotomyRequestForm(const RobotomyRequestForm&); // Constructeur de recopie
		RobotomyRequestForm(const std::string target);
        virtual ~RobotomyRequestForm(); // Destructeur éventuellement virtuel
        RobotomyRequestForm &operator=(const RobotomyRequestForm&); // Operator d'affectation

		virtual void execute(Bureaucrat const & executor) const;

};

#endif
