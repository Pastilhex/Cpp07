/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:01:06 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/21 11:53:19 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_
# define _ITER_

#include <iostream>

template<typename T>
void printElement(T element) {
	std::cout << element << std::endl;
}

template<typename T>
void iter(T* arrayAddress, int arrayLength, void (*func)(T)){
	for (int i = 0; i < arrayLength; i++)
		func(arrayAddress[i]);
}

#endif
