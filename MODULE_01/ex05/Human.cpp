/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:05:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 12:31:40 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void): _brain() {}

const Brain&	Human::getBrain(void)
{
	return (_brain);
}

std::string		Human::identifier(void)
{
	return (_brain.identifier());
}
