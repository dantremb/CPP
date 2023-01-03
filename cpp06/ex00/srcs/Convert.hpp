/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:45:51 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/03 11:09:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>

class Convert
{
	public:
		Convert();
		Convert(const Convert&);
		Convert(const std::string);
		virtual ~Convert();
		Convert &operator=(const Convert&);

		void	convertToChar();
		void	convertToInt();
		void	convertToFloat();
		void	convertToDouble();

	private:

		std::string		_value;
		char			_char;
		int				_int;
		float			_float;
		double			_double;
};

std::ostream &operator<<(std::ostream &out, Convert const &src);

#endif
