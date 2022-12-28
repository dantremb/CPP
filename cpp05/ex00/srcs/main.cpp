/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 08:13:46 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/28 13:07:50 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << "--------Creating and presenting everyone--------" << std::endl;
    Bureaucrat nobody;
    Bureaucrat bob("bob", 10);
    std::cout << nobody << std::endl;
    std::cout << bob << std::endl;

    std::cout << "\n\n----add 100 to the grade------" << std::endl;
    try {
        bob.incrementGrade(100);
        std::cout << bob << std::endl;
        nobody.incrementGrade(100);
        std::cout << nobody << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException&ex){
        std::cout << ex.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "\n\n---remove 100 to the grade------" << std::endl;
    try {
        bob.decrementGrade(100);
        std::cout << bob << std::endl;
        nobody.decrementGrade(100);
        std::cout << nobody << std::endl;
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }


    std::cout << "\n\n-----create a bureaucrat with too high grades------"
              << std::endl;
    try {
        Bureaucrat badass("badass", 200);
    } 
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }


    std::cout << "\n\n----create a bureaucrat with too low grades------" << std::endl;
    try {
        Bureaucrat badass("badass", 0);
    }
    /*catch (std::exception& ex) {  // catch toute les exceptions qui héritent de std::exceptions
        std::cout << ex.what() << std::endl;
    }*/
    catch (...) {
        std::cout << "unkowned exception" << std::endl;
    }

    return 0;
}