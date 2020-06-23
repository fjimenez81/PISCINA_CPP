/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:16:03 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 18:33:34 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType(void)
{
	std::string	&ref = _type;
	return (ref);
}

void				Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}