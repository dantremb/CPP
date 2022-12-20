/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:23:25 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/12 13:28:56 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	
	int _value;
	const static int _bits = 8;
	
public:

	Fixed(void); // Default constructor
	Fixed(const Fixed &newValue); // Copy constructor
	Fixed(const int nbr); // Constructor with int
	Fixed(const float nbr); // Constructor with float
	~Fixed(void); // Destructor

	Fixed	&operator=(const Fixed &nbr);
	Fixed	operator*(Fixed const &nbr) const;
	Fixed	operator/(Fixed const &nbr) const;
	Fixed	operator+(Fixed const &nbr) const;
	Fixed	operator-(Fixed const &nbr) const;
	Fixed 	&operator++();
	Fixed 	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	bool	operator>(Fixed const &nbr) const;
	bool	operator<(Fixed const &nbr) const;
	bool	operator>=(Fixed const &nbr) const;
	bool	operator<=(Fixed const &nbr) const;
	bool	operator==(Fixed const &nbr) const;
	bool	operator!=(Fixed const &nbr) const;
	

	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &nbr);

#endif
