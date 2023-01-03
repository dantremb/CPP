/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:09:48 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:49:14 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:
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
		
		void validateExecute(Bureaucrat const & executor) const;
		void beSigned(const Bureaucrat&);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception{
		
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
private:
		const std::string _name;
		const std::string _target;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;

		void checkGrade() const;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif // __FORM_H__