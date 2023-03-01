/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:11:35 by dantremb          #+#    #+#             */
/*   Updated: 2023/03/01 15:33:56 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdexcept>
# include <ctime>
# include <list>
# include <vector>
#include <algorithm>

# define MAXDISPLAY 10

class PmergeMe
{

public:
	PmergeMe(void);
	PmergeMe(PmergeMe const &src);
	~PmergeMe(void);

	void	check_value(char **av);
	void	sort_map(void);
	void	sort_set(void);
	void	print_results(void);

	PmergeMe	&operator=(PmergeMe const &rhs);

private:
	std::vector<unsigned int>	_vector;
	std::list<unsigned int>		_list;
	double		_timeVector;
	double		_timeList;

};

#endif