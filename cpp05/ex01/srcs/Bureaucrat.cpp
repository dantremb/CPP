/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:55:27 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/28 15:25:22 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Asked grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Asked grade is too low";
}

Bureaucrat::Bureaucrat() : _name("Nobody"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade < this->_max_grade)
        throw GradeTooHighException();
    if (grade > this->_min_grade)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName()), _grade(obj.getGrade()) {
    if (this->_grade < this->_max_grade)
        throw GradeTooHighException();
    else if (this->_grade > this->_min_grade)
        throw GradeTooLowException();
	else
    	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    if (this->_grade < this->_max_grade)
        throw GradeTooHighException();
    else if (this->_grade > this->_min_grade)
        throw GradeTooLowException();
	else
   		this->_grade = obj.getGrade();
	this->_name = obj.getName();
    return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::setName(const std::string& desired_name) {
    this->_name = desired_name;
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

void Bureaucrat::incrementGrade(int increment) {
	if (this->_grade - increment < this->_max_grade)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= increment;
}

void Bureaucrat::decrementGrade(int decrement) {
	if (this->_grade + decrement > this->_min_grade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += decrement;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& value) {
    out << value.getName() << " Bureaucrat grade = " << value.getGrade();
    return out;
}
