/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:50:24 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:50:24 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <sys/_types/_size_t.h>
# include <vector>
# include <iterator>
# include <algorithm>
# include <list>

class Span
{
	public:

		class maxNumberException : public std::exception {
			const char* what() const throw();
		};

		class lessNumberException : public std::exception {
			const char* what() const throw();
		};

		class noDiffException : public std::exception {
			const char* what() const throw();
		};

		Span();
		Span(unsigned int const);
		Span(Span const&);
		~Span();
		Span& operator=(Span const&);
	
		void				addNumber(int);
		int					shortestSpan();
		int					longestSpan();
		void				addRandom();
		void				rangeNumber(std::list<int>::iterator, std::list<int>::iterator);

	private:

		unsigned int		_max;
		std::list<int>		_n;
};

#endif
