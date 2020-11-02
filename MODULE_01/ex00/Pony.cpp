/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:28:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 11:09:49 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony()
{
    std::cout << _name << " has been destroyed!" << std::endl;
}

Pony::Pony(std::string str): _name(str) {}

void Pony::sleep(void)
{
	std::cout << _name << " sleeps in the grass" << std::endl;
}

void Pony::create(void)
{
	std::cout << _name << " is new beautiful pony!" << std::endl;
}
