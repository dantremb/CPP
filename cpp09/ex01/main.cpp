/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:49:45 by dantremb          #+#    #+#             */
/*   Updated: 2023/03/01 14:44:47 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN calc;
    if (ac == 2){
    	calc.DoCalculation(av[1]);
    } else {
        std::cout << "Error" << std::endl;	
		return (1);
	}
    return (0);
}