/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:16 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:18:14 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:

		class GradeTooHighException: public std::exception {
			public:
					virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
					virtual const char* what() const throw();
		};
		
		class FormIsNotSignException: public std::exception{
			public:
					virtual const char* what() const throw();
		};
		
		Form(); // Constructeur par défaut
        Form(const Form& src); // Constructeur de recopie
		Form(const std::string name, const std::string target, bool isSigned, const int gradeToSign, const int gradeToExec);
        virtual ~Form(); // Destructeur éventuellement virtuel
        Form &operator=(const Form&); // Operator d'affectation

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		std::string getTarget() const;
		virtual void execute(Bureaucrat const & user) const = 0;
		void validateExecute(Bureaucrat const & user) const;
		void beSigned(const Bureaucrat&);

private:
		const std::string _name;
		const std::string _target;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
		
		void checkGrade() const;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif
