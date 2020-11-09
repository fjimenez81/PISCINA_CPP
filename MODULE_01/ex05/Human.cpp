/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:05:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:41:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain&	Human::getBrain()
{
	return (_brain);
}

std::string		Human::identify() const
{
	return (_brain.identify());
}
