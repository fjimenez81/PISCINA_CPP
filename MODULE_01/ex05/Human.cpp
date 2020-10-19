/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:05:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 10:10:15 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

const Brain&	Human::getBrain(void)
{
	return (_brain);
}

std::string		Human::identifier(void)
{
	return (_brain.identifier());
}
