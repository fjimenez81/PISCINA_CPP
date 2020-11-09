/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:03:55 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:41:07 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	ss;

	ss << "0x" << std::uppercase << std::hex << (long)this;
	return (ss.str());
}