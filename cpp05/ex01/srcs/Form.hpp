/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:25:44 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/28 15:31:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    
    public:

        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };
        
        Form();
        Form(const std::string& name, int sign, int execute);
        Form(const Form& src);
        Form& operator=(const Form& src);
        ~Form();

        const std::string&      getName() const;
        unsigned int            getRequiredToSign() const;
        unsigned int            getRqeuiredToExecute() const;
        bool                    getIsSigned() const;
        void                    beSigned(const Bureaucrat&);

private:
    const std::string           _name;
    bool                        _signed;
    const int                   _required_sign;
    const int                   _required_execute;
    const int                   _maxGrade = 1;
    const int                   _minGrade = 150;
};

std::ostream& operator<<(std::ostream& out, const Form& value);

#endif
