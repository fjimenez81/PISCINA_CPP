/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:28:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 09:53:01 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony()
{
    std::cout << "The pony has been destroyed!" << std::endl;
}

Pony::Pony()
{
	std::cout << "Born a new beautiful pony!" << std::endl;
}

void Pony::sleep(void)
{
	std::cout << "The pony is sleeping in the grass!" << std::endl;
}

void Pony::eat(void)
{
	std::cout << "The pony is eating fresh grass!" << std::endl;
}
