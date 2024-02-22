/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:54:19 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/22 11:56:47 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {};

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {};

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
};

template<typename T>
Array<T>::Array(const Array& original) : _array(new T[original._size]), _size(original._size) 
{
	for (int i = 0; i < (int)original._size; i++)
		this->_array[i] = original._array[i];
};

template<typename T>
Array<T>& Array<T>::operator=(const Array& obj) 
{
	if (this != &obj) {
		delete[] this->_array;
		this->_size = obj._size;
		this->_array = new T[this->_size];
		for (int i = 0; i < (int)obj._size; i++)
			this->_array[i] = obj._array[i];
	}
	return *this;
};

template<typename T>
T& Array<T>::operator[](const int i) 
{
	if (i < 0 || i >= (const int)this->_size)
		throw std::out_of_range("Index out of range");
	return this->_array[i];
};

template<typename T>
unsigned int Array<T>::size( void )
{
	return (this->_size);
}
