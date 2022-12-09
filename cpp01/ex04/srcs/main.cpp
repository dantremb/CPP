/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:44:30 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/08 19:33:41 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int	main(int argc, char **argv)
{
	std::ifstream	Infile;
	std::ofstream	Outfile;
	std::string		Name, Find, Replace, Line;
	size_t			Pos;
	
	//check for correct number of arguments
	if (argc != 4)
		std::cout << "Usage: ./replace [filename] [string to find] [string to replace]" << std::endl;
	else {
		//get arguments
		Name = argv[1];
		Find = argv[2];
		Replace = argv[3];
		//open infile and check for errors
		Infile.open(Name);
		if (!Infile.is_open())
			std::cout << "Error: File could not be opened" << std::endl;
		else {
			//open outfile and check for errors
			Outfile.open(Name + ".replace");
			if (!Outfile.is_open())
				std::cout << "Error: Replace File could not be created" << std::endl;
			else {
				//read infile and replace string
				while (std::getline(Infile, Line)) {
					//if word is found
					if (Line.find(Find) != std::string::npos){
						//set position to first occurence of word
						Pos = Line.find(Find);
						while (Pos != std::string::npos){
							//replace word and set position to next occurence
							Line.erase(Pos, Find.length());
							Line.insert(Pos, Replace);
							Pos = Line.find(Find, Pos + Replace.length());
						}
					}
				Outfile << Line << std::endl;
				}
			Outfile.close();
			}
		}
	return (0);
	}
}