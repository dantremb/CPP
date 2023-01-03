/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:16:11 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 09:19:00 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too High.";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too Low.";
}

const char* Form::FormIsNotSignException::what() const throw() {
	return "The form is not signed.";
}

Form::Form(): 
	_name("Default"), 
	_target("Default"),
	 _isSigned(false), 
	 _gradeToSign(150),
	  _gradeToExec(150) {
}

Form::Form(const Form& src): 
	_name(src._name), 
	_target(src._target), 
	_isSigned(src._isSigned), 
	_gradeToSign(src._gradeToSign), 
	_gradeToExec(src._gradeToExec) {
}

Form::Form(const std::string name, const std::string target, bool isSigned, const int gradeToSign, const int gradeToExec):
	_name(name), 
	_target(target), 
	_isSigned(isSigned),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec) {
}

Form::~Form() {}

Form& Form::operator=(const Form& src) 
{
	if (&src != this){
		_isSigned=src._isSigned;
	}
	return *this;
}

std::string Form::getName() const {
	return _name;
}

bool Form::getIsSigned() const {
	return _isSigned;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExec() const {
	return _gradeToExec;
}

std::string Form::getTarget() const {
	return _target;
}

void Form::validateExecute(Bureaucrat const & user) const {
	if (!getIsSigned())
		throw FormIsNotSignException();
	else if (user.getGrade() > getGradeToExec())
		throw GradeTooLowException();
}

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& doc) {
	out << "Form \"" << doc.getName();
	if (doc.getIsSigned())
		std::cout << "\" is signed.";
	else
		std::cout << "\" is not signed.";
	std::cout << " Required grade to sign is " << doc.getGradeToSign() 
	<< " and to execute is " << doc.getGradeToExec() << "." << std::endl;
		
	return out;
}

void Form::checkGrade() const {
	if (_gradeToExec > 150)
		throw GradeTooLowException();
	else if (_gradeToExec < 1)
		throw GradeTooHighException();

	if (_gradeToSign > 150)
		throw GradeTooLowException();
	else if (_gradeToSign < 1)
		throw GradeTooHighException();
}
