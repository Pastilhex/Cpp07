/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:57:43 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/22 10:58:53 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

template <typename T>
void printArray(Array<T> &a) {
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << "end of the a list" << std::endl;
}

int main ( void ) {
	Array<int> * a = new Array<int>(5);
	Array<int> * b = new Array<int>(5);
	Array<int> * c = new Array<int>();

	printArray(*a);
	(*b)[2] = 3;

	printArray(*b);
	(*a)[2] = 6;

	printArray(*a);
	*a = *b;

	printArray(*a);
	(*a)[2] = 4;

	printArray(*b);

	printArray(*a);

	printArray(*c);

	return (0);
}