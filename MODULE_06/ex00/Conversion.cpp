/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:01:50 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 15:24:30 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(): _number(0), _check(false) {}

Conversion::~Conversion() {}

Conversion::Conversion(const Conversion &src)
{
    *this = src;
}

Conversion &Conversion::operator=(const Conversion &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

Conversion::Conversion(std::string str)
{
	std::string::size_type sz;

    try
  	{
		_number = std::stod(str, &sz);
  	}
  	catch(const std::exception& e)
  	{
		_check = true;
		return ;
  	}
	if (sz != str.length())
	{
		if (str[sz] == 'f' && sz + 1 == str.length())
		  	return ;
		else
			_check = true;
	}
}

void Conversion::to_char()
{
	std::cout << "char: ";
	if (isnan(_number) || isinf(_number) || _check == true)
		std::cout << "impossible" << std::endl;
	else if (isprint(_number))
		std::cout << "'" << static_cast<char>(_number) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void Conversion::to_int()
{
	std::cout << "int: ";
	if (isnan(_number) || _number > INT_MAX || _number < INT_MIN || _check == true)
	{	
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(_number) << std::endl;
}

void Conversion::to_float()
{
	std::cout << "float: ";
	if (_check == true)
	{	
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1)\
	<< static_cast<float>(_number) << 'f' << std::endl;	
}

void Conversion::to_double()
{
	std::cout << "double: ";
	if (_check == true)
	{	
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1)\
	<< static_cast<double>(_number) << std::endl;	
}