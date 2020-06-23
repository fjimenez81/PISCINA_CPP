/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:05:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 18:13:29 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain&	Human::getBrain(void)
{
	return (_brain);
}

std::string		Human::identifier(void)
{
	return (_brain.identifier());
}

/*Human::Human(void)
{
	const Brain	_brain;

	(void)_brain;
}*/