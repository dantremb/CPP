/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:18:14 by dantremb          #+#    #+#             */
/*   Updated: 2023/01/05 15:54:15 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <sstream>
#include <stdexcept>

template <class T>
class Array
{
    public:
        
        Array() : elems(new T[0]), _size(0){};

        Array(unsigned int n) : elems(new T[n]), _size(n){};

        Array(const Array& obj) : elems(NULL) { 
            *this = obj; 
        };
    
        const Array& operator=(const Array& obj) {
            delete[] elems;
            _size = obj.size();
            elems = new T[obj.size()];
            std::memcpy(elems, obj.elems, obj.size() * sizeof(T));
            return *this;
        }
    
        ~Array() { 
            delete[] elems; 
        };
        
        unsigned int size() const { 
            return _size; 
        };
 
    T& operator[](unsigned int index) {
        if (index >= size()) {
            std::stringstream ss;
            ss << "Can't access index" << index << std::endl;
            throw std::out_of_range(ss.str());
        }
        return elems[index];
    }

    private:

        T*              elems;
        unsigned int     _size;
};
