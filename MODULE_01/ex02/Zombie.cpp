/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:21:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 10:59:09 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::Zombie(std::string name, std::string type)
{
    _name = name;
    _type = type;
}

void	Zombie::advert()
{
    std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::announce()
{
    std::cout << "Hello!! I´m a zombie my name is " << _name << std::endl;
}
