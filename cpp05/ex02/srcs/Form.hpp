/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:22:49 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 21:46:00 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
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
    Form(const Form&);
    Form& operator=(const Form&);
    ~Form();

    const std::string&        getName() const;
    int                 getSignGrade() const;
    int                 getExecuteGrade() const;
    bool                getIsSigned() const;
    void                beSigned(const Bureaucrat& user);

private:
    const std::string   _name;
    bool                _isSigned;
    const int           _signGrade;
    const int           _executeGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& doc);

#endif
