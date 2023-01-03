/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:07 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:18:35 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat{
	
public:

		class GradeTooHighException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char* what() const throw();
		};

		Bureaucrat();
        Bureaucrat(const Bureaucrat& src);
		Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat&);

		std::string 			getName() const;
		int 					getGrade() const;
		void					incrementGrade();
		void 					decrementGrade();
		void 					signForm(Form& src) const;
		void 					executeForm(Form const & form);

private:

		const std::string 		_name;
		int 					_grade;

		void 					checkGrade() const;
		
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif
