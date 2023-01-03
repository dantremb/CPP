/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:57:27 by gcollet           #+#    #+#             */
/*   Updated: 2023/01/02 23:59:42 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", "Default", false, 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
	: Form(src.getName(), src.getTarget(), src.getIsSigned(), src.getGradeToSign(), src.getGradeToExec())
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: Form("ShrubberyCreationForm", target, false, 145, 137)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) 
{
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	validateExecute(executor);

	std::ofstream outfile((getTarget() + "_shrubbery").c_str());
	std::string shrubbery = "\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888888/8o\n\
   ,%&%%&&%&&%,@@@@@@@/@@@88888888/88'\n\
   %&&%/ %&%%&&@@@ V /@@' `8888 `/88'\n\
   `&% |` /%&'    |.|         |'|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
       / .__//_/_/  |___//___/. |__//__/_ ";
	outfile << shrubbery;
}
