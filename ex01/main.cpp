/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:00:56 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/21 11:53:07 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
		
	int intArray[5] = {1, 2, 3 , 4 ,5};
	iter(intArray, 5, printElement);

	double doubleArray[3] = {1.1, 2.2, 3.3};
	iter(doubleArray, 3, printElement);

	char charArray[4] = {'a', 'b', 'c', 'd'};
	iter(charArray, 4, printElement);
	
	std::string stringArray[2] = {"ivo", "daniel"};
	iter(stringArray, 2, printElement);

	return 0;
}
