/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:15:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/13 09:29:41 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <cstddef>
#include <stdexcept>
#include <sys/types.h>
#include <ostream>

// Template.hpp

template<typename T>
class Array
{
public:
    Array(void);
    Array(uint n);
    Array(const Array& src);
    ~Array(void);

    Array& operator=(const Array& rhs);

    T&       operator[](uint index);
    const T& operator[](uint index) const;

    uint getSize(void) const;

private:
    T*   _data;
    uint _size;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& array);

// Template.cpp

template<typename T>
Array<T>::Array(void)
: _data(NULL)
, _size(0)
{
}

template<typename T>
Array<T>::Array(uint n)
: _data(NULL)
, _size(n)
{
    if (n > 0)
        _data = new T[n]();
}

template<typename T>
Array<T>::Array(const Array& src)
{
    *this = src;
}

template<typename T>
Array<T>::~Array<T>(void)
{
    delete[] _data;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    if (this != &rhs)
    {
        delete[] _data;
        _size = rhs._size;
        if (_size > 0)
        {
            _data = new T[_size]();
            for (uint i = 0; i < _size; i++)
                _data[i] = rhs._data[i];
        }
        else
        {
            _data = NULL;
        }
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](uint index)
{
    if (index >= _size)
        throw std::out_of_range("Array index out of bounds");
    return _data[index];
}

template<typename T>
const T& Array<T>::operator[](uint index) const
{
    if (index >= _size)
        throw std::out_of_range("Array index out of bounds");
    return _data[index];
}

template<typename T>
uint Array<T>::getSize(void) const
{
    return _size;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& array)
{
	os << "Array :" << std::endl;
    os << "{";
    for (uint i = 0; i < array.getSize(); i++)
    {
		os << array[i];	
		if (i + 1 < array.getSize())
			os << ", ";
	}
    os << "}" << std::endl;
    return (os);
}


#endif  // ******************************************************** ARRAY_TPP //
