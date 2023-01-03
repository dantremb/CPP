/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:55 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:57:52 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too High.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too Low.";
}

Bureaucrat::Bureaucrat(): _name("Nobody"), _grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& src): 
		_name(src._name), 
		_grade(src._grade){	
	checkGrade();
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
		_name(name), 
		_grade(grade){
	checkGrade();	
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
	if (&src != this){
		_grade = src._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::incrementGrade() {
	_grade--;
	checkGrade();
}

void Bureaucrat::decrementGrade() {
	_grade++;
	checkGrade();
}

void Bureaucrat::signForm(Form& src) const{
	try{
		src.beSigned(*this);
		std::cout << getName() << " signs " << src.getName() << std::endl;
	}
	catch (std::exception& e){
		std::cout << getName() << " cannot signs " << src.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try{
		std::cout << getName() << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(std::exception& e){
		std::cout << getName() << " could not executes " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::checkGrade() const{
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return out;
}