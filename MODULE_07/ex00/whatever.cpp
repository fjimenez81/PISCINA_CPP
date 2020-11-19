/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:52:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/19 12:08:11 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void swap(T &a, T &b)
{
  	T c;
	
	c = a;
	a = b;
	b = c;
}

template <class T>
T min(T &a, T &b)
{
  	if (a < b)
		return (a);
	return (b);
}

template <class T>
T max(T &a, T &b)
{
  	if (a > b)
		return (a);
	return (b);
}
