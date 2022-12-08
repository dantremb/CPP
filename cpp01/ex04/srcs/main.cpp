/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:44:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 14:57:42 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int	main(int argc, char **argv)
{
	std::ifstream	Infile;
	std::ofstream	Outfile;
	std::string		Name;
	std::string		Find;
	std::string		Replace;

	//check for correct number of arguments
	if (argc == 4)
		std::cout << "Usage: ./replace [filename] [string to find] [string to replace]" << std::endl;
	Name = argv[1];
	Find = argv[2];
	Replace = argv[3];

	//open infile and check for errors
	Infile.open(Name);
	if (!Infile.is_open())
		std::cout << "Error: File could not be opened" << std::endl;
	
	//open outfile and check for errors
	Outfile.open(Name + ".replace");
	if (!Outfile.is_open())
		std::cout << "Error: Replace File could not be created" << std::endl;

	return (0);
}
