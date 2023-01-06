/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:18:17 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 15:55:26 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {

    std::cout << "----------------------------------------------------------------" << std::endl;
    std::cout << "Test from the subject to realise new int() initialise stuff to 0" << std::endl;
    std::cout << "----------------------------------------------------------------" << std::endl;
    int *a = new int[10]();
    int *tmp = a;
    for (int i = 0; i < 9; i++)
        std::cout << *a++ << std::endl;
    delete[] tmp;

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Actual tests" << std::endl;
    srand(time(NULL));
    Array<int> arr(10);
    int       *test = new int[10];
    int       *tmp2 = test;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Verifying that every value is 0" << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << "from the new int version = " << *test++ << std::endl;
    test = tmp2;
    for (int i = 0; i < 9; i++)
        std::cout << "from our version of array = " << arr[i] << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Now assigning random value to the arrays" << std::endl;
    for (int i = 0; i < 9; i++) {
        const int value = rand();
        arr[i] = value;
        test[i] = value;
    }
    std::cout << "----------------------------------------" << std::endl;
	std::cout << "Verifying that every values are the same" << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << "from the new int version " << *test++ << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << "from our version of array " << arr[i] << std::endl;
    delete[] tmp2;
}