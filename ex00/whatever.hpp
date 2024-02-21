/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:28:56 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/21 10:52:32 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_
# define _WHATEVER_

#include <iostream>

template<typename T>
void swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &min(T const &a, T const &b) {
	return (a < b) ? a : b;
}

template<class T>
T const &max(T const &a, T const &b) {
	return (a > b) ? a : b;
}

#endif
