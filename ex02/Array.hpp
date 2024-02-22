/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:57:40 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/22 11:12:57 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_
# define _ARRAY_

#include <iostream>

template<typename T>

class Array {

private:
	T* _array;
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array&);
	Array& operator=(const Array&);
	T& operator[](const int i);
	unsigned int size();
};

#endif
