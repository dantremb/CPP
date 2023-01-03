/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:26:14 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 19:13:53 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
    return ("User can't acces file, the grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("User can't access file, the grade is too low");
}

Form::Form() : _name("unamed"), _isSigned(false), _signGrade(150), _executeGrade(150) {}


Form::Form(const std::string& name, int sign, int execute) : _name(name), _isSigned(false), _signGrade(sign), _executeGrade(execute){
    if (sign < 1 || execute < 1)
        throw Form::GradeTooHighException();
    else if (sign > 150 || execute > 150)
        throw Form::GradeTooLowException();    
}

Form::Form(const Form& obj) : _name(obj._name), _isSigned(obj._isSigned), _signGrade(obj._signGrade), _executeGrade(obj._executeGrade){
    if (obj._signGrade < 1 || obj._executeGrade < 1)
        throw Form::GradeTooHighException();
    else if (obj._signGrade > 150 || obj._executeGrade > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(const Form& obj) {
    this->_name = obj._name;
    this->_isSigned = obj._isSigned;
    this->_signGrade = obj._signGrade;
    this->_executeGrade = obj._executeGrade;
    if (obj._signGrade < 1 || obj._executeGrade < 1)
        throw Form::GradeTooHighException();
    else if (obj._signGrade > 150 || obj._executeGrade > 150)
        throw Form::GradeTooLowException();
    return *this;
}

Form::~Form() {}


const std::string& Form::getName() const {
    return this->_name;
}
unsigned int Form::getRequiredToSign() const {
    return this->_signGrade;
}
unsigned int Form::getRqeuiredToExecute() const {
    return this->_executeGrade;
}
bool Form::getIsSigned() const {
    return this->_isSigned;
}

void Form::beSigned(const Bureaucrat& user) {
    if (user.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

std::ostream& operator<<(std::ostream& s, const Form& value) {
    s << value.getName() << " form require " << value.getRequiredToSign()
      << " to be signed and require " << value.getRqeuiredToExecute() << " to be executed and it "
      << (value.getIsSigned() ? "is signed" : "is not signed");
    return s;
}
