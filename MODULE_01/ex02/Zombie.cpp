/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:21:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 11:43:23 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::advert(void)
{
    std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}