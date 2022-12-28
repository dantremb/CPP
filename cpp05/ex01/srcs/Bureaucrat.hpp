/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:51:16 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/28 13:50:24 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

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

private:

    std::string 	_name;
    int         	_grade;
	const int		_max_grade = 1;
	const int		_min_grade = 150;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& src);

#endif
