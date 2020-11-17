/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:05:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 17:22:50 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	int i;

	try
	{
		//sp.addNumber(5);
		//sp.addNumber(3);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}

	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	Span sp2 = Span(10000);
	std::vector<int> test;

	i = 0;
	while (++i <= 10000)
		test.push_back(i);

	try
	{
		sp2.addMultipleNumbers(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nTest Multiple shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "Test Multiple longest: " << sp2.longestSpan() << std::endl;

	Span sp3 = Span(100000);
	std::vector<int> test2;

	i = 0;
	while (++i <= 100000)
		test2.push_back(i);

	try
	{
		sp3.addMultipleNumbers(test2.begin(), test2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nTest Multiple shortest: " << sp3.shortestSpan() << std::endl;
	std::cout << "Test Multiple longest: " << sp3.longestSpan() << std::endl;
	return (0);
}