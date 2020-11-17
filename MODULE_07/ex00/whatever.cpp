/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:52:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 15:36:51 by fjimenez         ###   ########.fr       */
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

int main()
{
    int a = 2;
    int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}