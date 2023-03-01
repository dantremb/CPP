/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:49:45 by dantremb          #+#    #+#             */
/*   Updated: 2023/02/28 14:53:07 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

std::vector< std::pair <std::string, float> > ft_fill_container(std::string filename) {
    std::vector< std::pair <std::string, float> > container; // create a vector of pairs
    std::ifstream file(filename.c_str()); // open the file
    if (file.is_open()) { // if the file is open
        std::string line; // create a string to store the line
        while (std::getline(file, line)) { // while we can get a line from the file
            std::stringstream ss(line); // create a stringstream from the line
            std::string date_str, value_str; // create two strings to store the date and the value
            std::getline(ss, date_str, '|'); // get the date from the stringstream
            std::getline(ss, value_str, '|'); // get the value from the stringstream
            date_str.erase(date_str.find_last_not_of(' ') + 1); // remove the trailing spaces from the date
            value_str.erase(0, value_str.find_first_not_of(' ')); // remove the leading spaces from the value
            value_str.erase(value_str.find_last_not_of(' ') + 1); // remove the trailing spaces from the value
            try { // try to convert the value to a float
                float value = stof(value_str);
                container.push_back(make_pair(date_str, value)); // add the date and the value to the container
            } catch (...) {
                container.push_back(make_pair(date_str, 1001)); // else i use 1001 as a flag
            }
        }
        file.close(); // close the file
    } else {
        std::cout << "Error: could not open file." << std::endl; // if the file is not open, print an error
    }
    return container;
}

void ft_print_value(const std::vector<std::pair<std::string, float> >& container, const std::pair<std::string, float>& input) {
	if (input.second == 1001) { // if value is 1001, it means that the value is not a float or empty value
		std::cout << "Error: bad input => " << input.first << std::endl;
	}
	else if (input.second < 0 ){ // if the value is negative we print the error message
		std::cout << "Error: not a positive number." << std::endl;	
	}
	else if (input.second > 1000){ // if the value is greater than 1000 we print the error message
		std::cout << "Error: too large a number." << std::endl;
	}
	else { // we look for each date in the container and enter the if statement if the date is found
		for (std::vector<std::pair<std::string, float> >::const_iterator it = container.begin(); it != container.end(); it++) {
			if (it->first == input.first) { 
				std::cout << input.first << " => " << input.second << " = " << it->second * input.second << std::endl;
			}
		}
	}
}

int main(int argc, char **argv) {
	if (argc == 2) {
		// Fill container with data from file
		std::vector<std::pair<std::string, float> > btc_values = ft_fill_container("btc_value.svc");
		std::vector<std::pair<std::string, float> > input = ft_fill_container(argv[1]);
		// Itterate from input and print the value for each line
		for (std::vector<std::pair<std::string, float> >::iterator it = input.begin(); it != input.end(); it++) {
			ft_print_value(btc_values, *it);
		}
	}
	else { // if no file is given as argument
		std::cout << "Error: could not open file." << std::endl;
	}
    return 0;
}
