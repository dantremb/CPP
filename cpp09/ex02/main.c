/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:11:40 by dantremb          #+#    #+#             */
/*   Updated: 2023/03/01 15:13:21 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "usage : ./PmergeMe [ints to sort]\n";
		return (1);
	}
	
	int i = 0;
	while (av[++i] != NULL)
	{
		int j = std::atoi(av[i]);
		if (j < 0 && 2147483647 > j)
		{
			std::cout << "We can only sort positive integer\n";
			return (1);
		}
	}

	PmergeMe	sorter;
	
	sorter.takeArg(av);

	i = 0;
	std::cout << "Before : ";
	while (av[++i] != NULL)
	{
		std::cout << std::atoi(av[i]) << " ";
		if (i > MAXDISPLAY)
		{
			std::cout << "[...]";
			break ;
		}
	}
	std::cout << std::endl;

	sorter.sortValues();
	sorter.displayResults();

	return (0);
}