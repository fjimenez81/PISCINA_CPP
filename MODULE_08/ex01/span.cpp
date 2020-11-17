/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:05:17 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 16:44:20 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _max_size(0) {}

Span::~Span() {_cont.clear();}

Span::Span(const Span &src) {*this = src;}

Span::Span(unsigned int N): _max_size(N) {}

Span & Span::operator=(const Span &copy)
{
    if(this != &copy)
        *this = copy;
    return (*this);
}

void Span::addNumber(int number)
{
    if (_max_size == _cont.size())
		throw std::runtime_error("Container is full");
	_cont.push_back(number);
}

int Span::shortestSpan()
{
	if (_cont.empty() || _cont.size() == 1)
		throw std::runtime_error("Container is empty or have only one element");
	std::vector<int> copy = _cont;
  	std::sort(copy.begin(), copy.end());
  	return (copy[1] - copy[0]);
}

int Span::longestSpan()
{
	if (_cont.empty() || _cont.size() == 1)
		throw std::runtime_error("Container is empty or have only one element");
	std::vector<int> copy = _cont;
  	std::sort(copy.begin(), copy.end());
  	return (copy.back() - copy.front());
}

void Span::addMultipleNumbers(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator it = begin;

	while (it != end)
	{
    	if (_cont.size() == _max_size)
      		throw std::runtime_error("container is full");
    	_cont.push_back(*it);
    	it++;
  	}
}