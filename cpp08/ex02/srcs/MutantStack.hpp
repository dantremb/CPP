/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:50:33 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 09:50:33 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(void) {}
        MutantStack & operator=(MutantStack const &cpy)
        {
			this->c = cpy.c;
			return(*this);
        }
        MutantStack(MutantStack const &cpy) { *this = cpy; }
        ~MutantStack(void) {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin()     { return (this->c.begin());     }
        iterator    end()       { return (this->c.end());       }
};

#endif
