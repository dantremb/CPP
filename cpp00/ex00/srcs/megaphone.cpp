/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:02:50 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/19 21:10:38 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{	
	if (argc > 1)
	{
		for (int arg = 1; argv[arg]; arg++)
		{
			for (int i = 0; argv[arg][i]; i++)
				std::cout << char(std::toupper(argv[arg][i]));
		std::cout << ' ';
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
