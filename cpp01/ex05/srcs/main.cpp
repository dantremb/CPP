/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:28:17 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 20:40:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main(int argc, char **argv){
	if (argc == 2){
		std::string str(argv[1]);
		
		Harl harl;
		harl.complain(str);
	}
	else
		std::cout << "CHOOSE BETWEEN : DEBUG, INFO, WARNING, ERROR" << std::endl;
	return 0;
}