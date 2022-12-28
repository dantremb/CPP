/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:25:41 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/28 15:31:27 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
    return ("the grade is too high");
}
const char* Form::GradeTooLowException::what() const throw() {
    return ("the grade is too low");
}

Form::Form(){
    this->name = "default";
    this->is_signed = false;
    this->required_sign = 150;
    this->required_execute = 150;
}

Form::Form(const std::string& name, int sign, int execute){
    this->name = name;
    this->is_signed = false;
    if (sign < _max || execute < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || execute > 150)
        throw Form::GradeTooLowException();
    this->required_sign = sign;
    this->required_execute = execute;

}

// constructeur de recopie
Form::Form(const Form& obj)
    : name(obj.name),
      is_signed(obj.is_signed),
      required_sign(obj.required_sign),
      required_execute(obj.required_execute) {
    checkGrades();
}

// opérateur de recopie
Form& Form::operator=(const Form& obj) {
    this->is_signed = obj.is_signed;
    checkGrades();
    return *this;
}
// destructeur par défaut
Form::~Form() {}


// getters and setters
const std::string& Form::getName() const {
    return this->name;
}
unsigned int Form::getRequiredToSign() const {
    return this->required_sign;
}
unsigned int Form::getRqeuiredToExecute() const {
    return this->required_execute;
}
bool Form::getIsSigned() const {
    return this->is_signed;
}
/*Ajoutez également au Form une fonction membre beSigned() prenant un Bureaucrat en paramètre.
Il doit changer le status du formulaire en signé si l’échelon du Bureaucrat est suffisant
(supérieur ou égal à l’échelon requis).
Pour rappel, l’échelon 1 est plus élevé que l’échelon 2.
Si l’échelon est insuffisant, jetez une Form::GradeTooLowException.*/
// since throw is gonna make the function go backward
// we don't need an else after the if
void Form::beSigned(const Bureaucrat& valorous_Bureaucrat) {
    if (valorous_Bureaucrat.getGrade() > this->required_sign)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

// at the end we use a ternary operator 
std::ostream& operator<<(std::ostream& s, const Form& value) {
    s << value.getName() << " form require " << value.getRequiredToSign()
      << " to be signed and require " << value.getRqeuiredToExecute() << " to be executed and it "
      << (value.getIsSigned() ? "is signed" : "is not signed");
    return s;
}