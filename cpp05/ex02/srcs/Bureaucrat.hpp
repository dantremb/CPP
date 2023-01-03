/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:51:16 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 21:41:28 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Form;

class Bureaucrat
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
	
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat &src);

    void        	setName(const std::string &name);
    std::string 	getName() const;
    int         	getGrade() const;
    void        	incrementGrade(int increment);
    void        	decrementGrade(int decrement);
    void        	signForm(Form& value) const;

private:

    std::string 	_name;
    int         	_grade;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
