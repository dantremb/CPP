/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 08:13:46 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/02 21:50:09 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Form form;
    Bureaucrat bur;
    
    std::cout <<form<<std::endl;
    form.beSigned(bur);
    std::cout <<form<<std::endl;
    Form form1("popa", 100, 100);
    std::cout <<form1<<std::endl;
    try{
    form1.beSigned(bur);}
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    bur.signForm(form);
    bur.signForm(form1);
    Form form2(form);
    bur.signForm(form2);
    bur.signForm(form1);
    form1 = form;
    bur.signForm(form2);
    bur.signForm(form1);
    return 0;
}