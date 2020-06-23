/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:28:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/22 21:30:38 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony()
{
    std::cout << "exit" << std::endl;
    return ;
}

Pony::Pony(std::string str)
{
    _name = str;
    _sleep = true;
}

void Pony::sleep(void)
{
	if (_sleep)
	{
		std::cout << _name << " sleeps in the grass" << std::endl;
		_sleep = false;
	}
	else
		std::cout << _name << " isn´t sleeping in the grass" << std::endl;
}
